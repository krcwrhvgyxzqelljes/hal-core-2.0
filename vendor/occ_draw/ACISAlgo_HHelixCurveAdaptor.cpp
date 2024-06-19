#include <ACISAlgo_HHelixCurveAdaptor.h>


ACISAlgo_HHelixCurveAdaptor::ACISAlgo_HHelixCurveAdaptor(const ACISGeom_HelixData& d)
 : myAdaptor(d) {
  }


ACISAlgo_HHelixCurveAdaptor::ACISAlgo_HHelixCurveAdaptor(const std::shared_ptr<ACISAlgo_HelixCurveAdaptor::Evaluator>& theEvaluator
                                                       , Standard_Real theMin
                                                       , Standard_Real theMax)
 : myAdaptor(theEvaluator, theMin, theMax) {
  }


IMPLEMENT_STANDARD_HANDLE(ACISAlgo_HHelixCurveAdaptor, Adaptor3d_Curve)
IMPLEMENT_STANDARD_RTTIEXT(ACISAlgo_HHelixCurveAdaptor, Adaptor3d_Curve)
