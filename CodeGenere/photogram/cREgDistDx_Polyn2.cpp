// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDx_Polyn2.h"


cREgDistDx_Polyn2::cREgDistDx_Polyn2():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   Close(false);
}



void cREgDistDx_Polyn2::ComputeVal()
{
   double tmp0_ = mLocRegDistu1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistu1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = mCompCoord[3];
   double tmp5_ = 1 + tmp4_;
   double tmp6_ = mCompCoord[4];
   double tmp7_ = mCompCoord[5];
   double tmp8_ = tmp7_ * 2;
   double tmp9_ = mLocRegDistu2_x - mLocPolyn2_State_1_0;
   double tmp10_ = (tmp9_) / mLocPolyn2_State_0_0;
   double tmp11_ = mCompCoord[6];
   double tmp12_ = mLocRegDistu2_y - mLocPolyn2_State_2_0;
   double tmp13_ = (tmp12_) / mLocPolyn2_State_0_0;
   double tmp14_ = mCompCoord[7];
   double tmp15_ = (tmp1_) * (tmp3_);
   double tmp16_ = (tmp3_) * (tmp3_);
   double tmp17_ = (tmp1_) * (tmp1_);
   double tmp18_ = 1 - tmp4_;
   double tmp19_ = (tmp10_) * (tmp13_);
   double tmp20_ = tmp11_ * 2;
   double tmp21_ = (tmp13_) * (tmp13_);
   double tmp22_ = mCompCoord[8];
   double tmp23_ = (tmp10_) * (tmp10_);

  mVal[0] = (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp1_) + tmp6_ * (tmp3_)) - tmp8_ * tmp17_ + tmp11_ * tmp15_ + tmp14_ * tmp16_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp10_) + tmp6_ * (tmp13_)) - tmp8_ * tmp23_ + tmp11_ * tmp19_ + tmp14_ * tmp21_) * mLocPolyn2_State_0_0) - mLocRegDistu3_x;

  mVal[1] = (mLocPolyn2_State_2_0 + (((tmp18_) * (tmp3_) + tmp6_ * (tmp1_) + tmp7_ * tmp15_) - tmp20_ * tmp16_ + tmp22_ * tmp17_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_2_0 + (((tmp18_) * (tmp13_) + tmp6_ * (tmp10_) + tmp7_ * tmp19_) - tmp20_ * tmp21_ + tmp22_ * tmp23_) * mLocPolyn2_State_0_0) - mLocRegDistu3_y;

}


void cREgDistDx_Polyn2::ComputeValDeriv()
{
   double tmp0_ = mLocRegDistu1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistu1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = mCompCoord[3];
   double tmp5_ = 1 + tmp4_;
   double tmp6_ = mCompCoord[4];
   double tmp7_ = mCompCoord[5];
   double tmp8_ = tmp7_ * 2;
   double tmp9_ = mLocRegDistu2_x - mLocPolyn2_State_1_0;
   double tmp10_ = (tmp9_) / mLocPolyn2_State_0_0;
   double tmp11_ = mCompCoord[6];
   double tmp12_ = mLocRegDistu2_y - mLocPolyn2_State_2_0;
   double tmp13_ = (tmp12_) / mLocPolyn2_State_0_0;
   double tmp14_ = mCompCoord[7];
   double tmp15_ = (tmp1_) * (tmp1_);
   double tmp16_ = (tmp10_) * (tmp10_);
   double tmp17_ = (tmp1_) * (tmp3_);
   double tmp18_ = (tmp10_) * (tmp13_);
   double tmp19_ = (tmp3_) * (tmp3_);
   double tmp20_ = (tmp13_) * (tmp13_);
   double tmp21_ = 1 - tmp4_;
   double tmp22_ = tmp11_ * 2;
   double tmp23_ = mCompCoord[8];
   double tmp24_ = -(1);
   double tmp25_ = (tmp1_) * mLocPolyn2_State_0_0;
   double tmp26_ = (tmp10_) * mLocPolyn2_State_0_0;
   double tmp27_ = tmp25_ - tmp26_;
   double tmp28_ = tmp17_ * mLocPolyn2_State_0_0;
   double tmp29_ = tmp18_ * mLocPolyn2_State_0_0;
   double tmp30_ = tmp28_ - tmp29_;

  mVal[0] = (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp1_) + tmp6_ * (tmp3_)) - tmp8_ * tmp15_ + tmp11_ * tmp17_ + tmp14_ * tmp19_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_1_0 + (((tmp5_) * (tmp10_) + tmp6_ * (tmp13_)) - tmp8_ * tmp16_ + tmp11_ * tmp18_ + tmp14_ * tmp20_) * mLocPolyn2_State_0_0) - mLocRegDistu3_x;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp27_;
  mCompDer[0][4] = (tmp3_) * mLocPolyn2_State_0_0 - (tmp13_) * mLocPolyn2_State_0_0;
  mCompDer[0][5] = -(2 * tmp15_) * mLocPolyn2_State_0_0 - -(2 * tmp16_) * mLocPolyn2_State_0_0;
  mCompDer[0][6] = tmp30_;
  mCompDer[0][7] = tmp19_ * mLocPolyn2_State_0_0 - tmp20_ * mLocPolyn2_State_0_0;
  mCompDer[0][8] = 0;
  mVal[1] = (mLocPolyn2_State_2_0 + (((tmp21_) * (tmp3_) + tmp6_ * (tmp1_) + tmp7_ * tmp17_) - tmp22_ * tmp19_ + tmp23_ * tmp15_) * mLocPolyn2_State_0_0) - (mLocPolyn2_State_2_0 + (((tmp21_) * (tmp13_) + tmp6_ * (tmp10_) + tmp7_ * tmp18_) - tmp22_ * tmp20_ + tmp23_ * tmp16_) * mLocPolyn2_State_0_0) - mLocRegDistu3_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = tmp24_ * (tmp3_) * mLocPolyn2_State_0_0 - tmp24_ * (tmp13_) * mLocPolyn2_State_0_0;
  mCompDer[1][4] = tmp27_;
  mCompDer[1][5] = tmp30_;
  mCompDer[1][6] = -(2 * tmp19_) * mLocPolyn2_State_0_0 - -(2 * tmp20_) * mLocPolyn2_State_0_0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = tmp15_ * mLocPolyn2_State_0_0 - tmp16_ * mLocPolyn2_State_0_0;
}


void cREgDistDx_Polyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDx_Polyn2 Has no Der Sec");
}

void cREgDistDx_Polyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cREgDistDx_Polyn2::SetPolyn2_State_1_0(double aVal){ mLocPolyn2_State_1_0 = aVal;}
void cREgDistDx_Polyn2::SetPolyn2_State_2_0(double aVal){ mLocPolyn2_State_2_0 = aVal;}
void cREgDistDx_Polyn2::SetRegDistu1_x(double aVal){ mLocRegDistu1_x = aVal;}
void cREgDistDx_Polyn2::SetRegDistu1_y(double aVal){ mLocRegDistu1_y = aVal;}
void cREgDistDx_Polyn2::SetRegDistu2_x(double aVal){ mLocRegDistu2_x = aVal;}
void cREgDistDx_Polyn2::SetRegDistu2_y(double aVal){ mLocRegDistu2_y = aVal;}
void cREgDistDx_Polyn2::SetRegDistu3_x(double aVal){ mLocRegDistu3_x = aVal;}
void cREgDistDx_Polyn2::SetRegDistu3_y(double aVal){ mLocRegDistu3_y = aVal;}



double * cREgDistDx_Polyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "Polyn2_State_1_0") return & mLocPolyn2_State_1_0;
   if (aName == "Polyn2_State_2_0") return & mLocPolyn2_State_2_0;
   if (aName == "RegDistu1_x") return & mLocRegDistu1_x;
   if (aName == "RegDistu1_y") return & mLocRegDistu1_y;
   if (aName == "RegDistu2_x") return & mLocRegDistu2_x;
   if (aName == "RegDistu2_y") return & mLocRegDistu2_y;
   if (aName == "RegDistu3_x") return & mLocRegDistu3_x;
   if (aName == "RegDistu3_y") return & mLocRegDistu3_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDx_Polyn2::mTheAuto("cREgDistDx_Polyn2",cREgDistDx_Polyn2::Alloc);


cElCompiledFonc *  cREgDistDx_Polyn2::Alloc()
{  return new cREgDistDx_Polyn2();
}


