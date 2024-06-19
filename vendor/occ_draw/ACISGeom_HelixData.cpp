#include <ACISGeom_HelixData.h>
#include <ACISAlgo_HHelixCurveAdaptor.h>
#include <GeomAbs_Shape.hxx>
#include <GeomConvert_ApproxCurve.hxx>


/*!
 * Uses adaptor classes and invokes GeomConvert_ApproxCurve
 * to approximate with a B-Spline.
 * Created B-Spline is polynomial and is of C2-continuity.
 * Returns true if the B-Spline has been successfully created
 * and false otherwise.
 */
bool ACISGeom_HelixData::MakeHelix(const ACISGeom_HelixData& theSource, Handle(Geom_BSplineCurve)& theTarget) {
  Handle(ACISAlgo_HHelixCurveAdaptor) anAdaptor = new ACISAlgo_HHelixCurveAdaptor(theSource);
  double           aTol = Precision::Confusion();
  GeomAbs_Shape    aContinuity = GeomAbs_C2;   /* highest supported continuity */
  int              aMaxSeg     = 10000,        /* max number of spans */
                   aMaxDeg     = 9;            /* max degree, consistent with settings in Algo */

  GeomConvert_ApproxCurve anApprox(anAdaptor
                                 , aTol
                                 , aContinuity
                                 , aMaxSeg
                                 , aMaxDeg);
  if (anApprox.HasResult()) {
     theTarget = anApprox.Curve();
//     Base_Debugger& aDebugger = Base_Debugger::GlobalInstance();

//     aDebugger.Save(theTarget, "curve");
     }
  return !theTarget.IsNull();
  }
