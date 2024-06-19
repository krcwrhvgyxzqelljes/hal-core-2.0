#ifndef ACISALGO_HELIXCURVEADAPTOR_CYLINDEREVALUATOR_H
#define ACISALGO_HELIXCURVEADAPTOR_CYLINDEREVALUATOR_H
#include <ACISAlgo_HelixCurveAdaptor.h>
#include <ACISAlgo_HelixCurveAdaptor_p.h>
#include <gp_Pnt.hxx>
#include <ACISGeom_HelixData.h>


/*!
 * \class ACISAlgo_HelixCurveAdaptor_CylinderEvaluator
 * \brief Evaluates a helix lying on a cylinder.
 */
class ACISAlgo_HelixCurveAdaptor_CylinderEvaluator : public ACISAlgo_HelixCurveAdaptor::Evaluator
{
public:
  ACISAlgo_HelixCurveAdaptor_CylinderEvaluator(const ACISGeom_HelixData& theData);

  virtual void D0(double U, gp_Pnt& P) const override;
  virtual void D1(double U, gp_Pnt& P, gp_Vec& V) const override;
  virtual void D2(double U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2) const override;
  virtual void D3(double U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3) const override;
  virtual gp_Vec DN(double U, int N) const override;
  };

#endif
