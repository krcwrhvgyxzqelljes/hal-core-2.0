#ifndef ACISALGO_HHELIXCURVEADAPTOR_H
#define ACISALGO_HHELIXCURVEADAPTOR_H
#include <Standard_Type.hxx>
#include <Standard_DefineHandle.hxx>
#include <Adaptor3d_Curve.hxx>
#include <ACISGeom_HelixData.h>
#include <ACISAlgo_HelixCurveAdaptor.h>
#include <memory>

DEFINE_STANDARD_HANDLE(ACISAlgo_HHelixCurveAdaptor, Adaptor3d_Curve)


class ACISAlgo_HHelixCurveAdaptor : public Adaptor3d_Curve
{
  DEFINE_STANDARD_RTTIEXT(ACISAlgo_HHelixCurveAdaptor, Adaptor3d_Curve)

public:
  //! Constructor.
  ACISAlgo_HHelixCurveAdaptor(const ACISGeom_HelixData& theData);

  //! Constructor.
  ACISAlgo_HHelixCurveAdaptor(const std::shared_ptr<ACISAlgo_HelixCurveAdaptor::Evaluator>& theEvaluator
                            , Standard_Real theMin
                            , Standard_Real theMax);

  //! Returns the adaptor as Adaptor3d_Curve.
  /*! Return the internal ACISAlgo_HelixCurveAdaptor object.*/
  virtual const Adaptor3d_Curve& Curve() const /* override */ { return myAdaptor; }

  //! Returns the adaptor as Adaptor3d_Curve.
  /*! Return the internal ACISAlgo_HelixCurveAdaptor object.*/
  virtual Adaptor3d_Curve& GetCurve() /* override */ { return myAdaptor; }

protected:
  ACISAlgo_HelixCurveAdaptor  myAdaptor;
  };
#endif
