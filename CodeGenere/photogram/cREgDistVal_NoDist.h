// File Automatically generated by eLiSe
#include "StdAfx.h"


class cREgDistVal_NoDist: public cElCompiledFonc
{
   public :

      cREgDistVal_NoDist();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetRegDistKnownVal_x(double);
      void SetRegDistKnownVal_y(double);
      void SetRegDistValP1_x(double);
      void SetRegDistValP1_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocRegDistKnownVal_x;
      double mLocRegDistKnownVal_y;
      double mLocRegDistValP1_x;
      double mLocRegDistValP1_y;
};
