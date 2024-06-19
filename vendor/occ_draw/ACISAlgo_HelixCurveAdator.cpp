#include <ACISAlgo_HelixCurveAdaptor.h>
#include <ACISAlgo_HelixCurveAdaptor_CylinderEvaluator.h>
#include <Standard_Assert.hxx>
/*********************************************************************************************/


ACISAlgo_HelixCurveAdaptor::ACISAlgo_HelixCurveAdaptor(const ACISGeom_HelixData& theData)
 : myMin (theData.RangeMin())
 , myMax (theData.RangeMax()) {
  if (std::fabs(theData.Taper()) < Precision::Confusion()) {
     //cylinder
     myEvaluator.reset(new ACISAlgo_HelixCurveAdaptor_CylinderEvaluator(theData));
     }
//  else {
//     //cone
//     myEvaluator.reset(new ACISAlgo_HelixCurveAdaptor_ConeEvaluator(theData));
//     }
  }


/*! Used when trimming*/
ACISAlgo_HelixCurveAdaptor::ACISAlgo_HelixCurveAdaptor(const std::shared_ptr<Evaluator>& theEvaluator, double theMin, double theMax)
 : myEvaluator(theEvaluator)
 , myMin(theMin)
 , myMax(theMax) {
  Standard_ASSERT_RAISE(myEvaluator->Data().RangeMin() <= theMin, "invalid value >theMin<");
  Standard_ASSERT_RAISE(myEvaluator->Data().RangeMax() >= theMax, "invalid value >theMax<");
  }


double ACISAlgo_HelixCurveAdaptor::FirstParameter() const {
  return myMin;
  }


double ACISAlgo_HelixCurveAdaptor::LastParameter() const {
  return myMax;
  }


GeomAbs_Shape ACISAlgo_HelixCurveAdaptor::Continuity() const {
  return GeomAbs_CN;
  }


Standard_Integer ACISAlgo_HelixCurveAdaptor::NbIntervals (const GeomAbs_Shape /*S*/) __CADEX_ADAPTOR3D_CURVE_CONST {
  return 1;
  }


void ACISAlgo_HelixCurveAdaptor::Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape /*S*/) __CADEX_ADAPTOR3D_CURVE_CONST {
  T (T.Lower()) = FirstParameter();
  T (T.Upper()) = LastParameter();
  }


Handle(Adaptor3d_Curve) ACISAlgo_HelixCurveAdaptor::Trim(const double First, const double Last, const double /*Tol*/) const {
  return new ACISAlgo_HHelixCurveAdaptor(myEvaluator, First, Last);
  }


Standard_Boolean ACISAlgo_HelixCurveAdaptor::IsClosed() const {
  return Standard_False;
  }


Standard_Boolean ACISAlgo_HelixCurveAdaptor::IsPeriodic() const {
  return Standard_False;
  }


gp_Pnt ACISAlgo_HelixCurveAdaptor::Value(const double U) const {
  gp_Pnt aP;

  D0(U, aP);

  return aP;
  }


void ACISAlgo_HelixCurveAdaptor::D0(const double U, gp_Pnt& P) const {
  myEvaluator->D0(U, P);
  }


void ACISAlgo_HelixCurveAdaptor::D1(const double U, gp_Pnt& P, gp_Vec& V) const {
  myEvaluator->D1(U, P, V);
  }


void ACISAlgo_HelixCurveAdaptor::D2(const double U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2) const {
  myEvaluator->D2(U, P, V1, V2);
  }


void ACISAlgo_HelixCurveAdaptor::D3(const double U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3) const {
  myEvaluator->D3(U, P, V1, V2, V3);
  }


gp_Vec ACISAlgo_HelixCurveAdaptor::DN(const double U, const Standard_Integer N) const {
  return myEvaluator->DN(U, N);
  }


double ACISAlgo_HelixCurveAdaptor::Resolution(const double R3d) const {
  //see GeomAdaptor_Curve::Resolution()
  const auto& aData = myEvaluator->Data();
  double      R     = std::max(aData.XRadius(), aData.YRadius());

  if (R3d < 2 * R) return 2 * ASin(R3d / (2 * R));
  return 2 * M_PI;
  }


GeomAbs_CurveType ACISAlgo_HelixCurveAdaptor::GetType() const {
  return GeomAbs_OtherCurve;
  }
