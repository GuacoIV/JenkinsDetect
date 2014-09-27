/*
 * rdct.c
 *
 * Code generation for function 'rdct'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "rdct.h"
#include "JenkinsCompare_emxutil.h"
#include "fft.h"
#include "JenkinsCompare_data.h"

/* Variable Definitions */
static emlrtRSInfo ad_emlrtRSI = { 78, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtRSInfo bd_emlrtRSI = { 79, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 1, 12, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 52, 5, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 78, 1, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 83, 5, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtBCInfo u_emlrtBCI = { -1, -1, 77, 12, "newx", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 77, 27, "newx", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtECInfo g_emlrtECI = { 2, 77, 6, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtECInfo h_emlrtECI = { 2, 79, 8, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtECInfo i_emlrtECI = { -1, 80, 1, "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 87, 15, "y", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 87, 17, "y", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 87, 30, "tempTwo", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 87, 33, "tempTwo", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 57, 18, "newx", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 57, 37, "temp", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 57, 40, "temp", "rdct",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rdct.m",
  0 };

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void rdct(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  int32_T fl;
  emxArray_creal_T *newx;
  int32_T ndbl;
  int32_T i10;
  uint32_T counter;
  uint32_T numRows[2];
  int32_T cdiff;
  int32_T i11;
  int32_T i12;
  int32_T i13;
  int32_T m;
  int32_T k;
  real_T a;
  emxArray_real_T *b_y;
  int32_T i14;
  int32_T i15;
  int32_T apnd;
  real_T r;
  int32_T absb;
  emxArray_creal_T *c_y;
  emxArray_creal_T *b_x;
  real_T x_im;
  real_T b_x_im;
  emxArray_creal_T *z;
  emxArray_creal_T *b_newx;
  int32_T c_newx[2];
  emxArray_creal_T *b_z;
  int32_T c_z[2];
  int32_T tmp_data[306];
  int32_T iv27[2];
  emxArray_real_T *tempTwo;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* RDCT     Discrete cosine transform of real data Y=(X,N,A,B) */
  /*  Data is truncated/padded to length N. */
  /*  */
  /*  This routine is equivalent to multiplying by the matrix */
  /*  */
  /*    rdct(eye(n)) = diag([sqrt(2)*B/A repmat(2/A,1,n-1)]) * cos((0:n-1)'*(0.5:n)*pi/n) */
  /*  */
  /*  Default values of the scaling factors are A=sqrt(2N) and B=1 which */
  /*  results in an orthogonal matrix. Other common values are A=1 or N and/or B=1 or sqrt(2).  */
  /*  If b~=1 then the columns are no longer orthogonal. */
  /*  */
  /*  see IRDCT for the inverse transform */
  /*  BUG: in line 51 we should do chopping after transform and not before */
  /*       Copyright (C) Mike Brookes 1998 */
  /*       Version: $Id: rdct.m 713 2011-10-16 14:45:43Z dmb $ */
  /*  */
  /*    VOICEBOX is a MATLAB toolbox for speech processing. */
  /*    Home page: http://www.ee.ic.ac.uk/hp/staff/dmb/voicebox/voicebox.html */
  /*  */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*    This program is free software; you can redistribute it and/or modify */
  /*    it under the terms of the GNU General Public License as published by */
  /*    the Free Software Foundation; either version 2 of the License, or */
  /*    (at your option) any later version. */
  /*  */
  /*    This program is distributed in the hope that it will be useful, */
  /*    but WITHOUT ANY WARRANTY; without even the implied warranty of */
  /*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the */
  /*    GNU General Public License for more details. */
  /*  */
  /*    You can obtain a copy of the GNU General Public License from */
  /*    http://www.gnu.org/copyleft/gpl.html or by writing to */
  /*    Free Software Foundation, Inc.,675 Mass Ave, Cambridge, MA 02139, USA. */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* Was fl=size(x,1)==1; %0 */
  if (x->size[0] == 1) {
    fl = 1;
  } else {
    fl = 0;
  }

  emxInit_creal_T(sp, &newx, 2, &w_emlrtRTEI, true);
  if (fl != 0) {
    ndbl = x->size[0] * x->size[1];
    i10 = newx->size[0] * newx->size[1];
    newx->size[0] = ndbl;
    emxEnsureCapacity(sp, (emxArray__common *)newx, i10, (int32_T)sizeof(creal_T),
                      &v_emlrtRTEI);
    i10 = newx->size[0] * newx->size[1];
    newx->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)newx, i10, (int32_T)sizeof(creal_T),
                      &v_emlrtRTEI);
    ndbl = x->size[0] * x->size[1];
    for (i10 = 0; i10 < ndbl; i10++) {
      newx->data[i10].re = 0.0;
      newx->data[i10].im = 0.0;
    }

    counter = 1U;
    for (i10 = 0; i10 < 2; i10++) {
      numRows[i10] = (uint32_T)x->size[i10];
    }

    ndbl = 0;
    while (ndbl <= (int32_T)numRows[1] - 1) {
      cdiff = 0;
      while (cdiff <= (int32_T)numRows[0] - 1) {
        i10 = newx->size[0];
        i11 = (int32_T)counter;
        i12 = x->size[0];
        i13 = x->size[1];
        newx->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &bb_emlrtBCI,
          sp) - 1].re = x->data[(emlrtDynamicBoundsCheckFastR2012b(cdiff + 1, 1,
          i12, &cb_emlrtBCI, sp) + x->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(ndbl + 1, 1, i13, &db_emlrtBCI, sp)
           - 1)) - 1].re;
        i10 = newx->size[0];
        i11 = (int32_T)counter;
        i12 = x->size[0];
        i13 = x->size[1];
        newx->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &bb_emlrtBCI,
          sp) - 1].im = x->data[(emlrtDynamicBoundsCheckFastR2012b(cdiff + 1, 1,
          i12, &cb_emlrtBCI, sp) + x->size[0] *
          (emlrtDynamicBoundsCheckFastR2012b(ndbl + 1, 1, i13, &db_emlrtBCI, sp)
           - 1)) - 1].im;
        counter++;
        cdiff++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      ndbl++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    /* Was x=x(:); */
  } else {
    i10 = newx->size[0] * newx->size[1];
    newx->size[0] = x->size[0];
    newx->size[1] = x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)newx, i10, (int32_T)sizeof(creal_T),
                      &v_emlrtRTEI);
    ndbl = x->size[0] * x->size[1];
    for (i10 = 0; i10 < ndbl; i10++) {
      newx->data[i10] = x->data[i10];
    }
  }

  m = newx->size[0];
  k = newx->size[1];
  a = muDoubleScalarSqrt(2.0 * (real_T)newx->size[0]);
  emxInit_real_T(sp, &b_y, 2, &v_emlrtRTEI, true);
  if (1 > m) {
    i10 = 1;
    i11 = -1;
  } else {
    i10 = newx->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i10, &u_emlrtBCI, sp);
    i10 = 2;
    i11 = newx->size[0];
    i11 = emlrtDynamicBoundsCheckFastR2012b(m, 1, i11, &u_emlrtBCI, sp) - 1;
  }

  i12 = (int32_T)muDoubleScalarFloor((real_T)m / 2.0) << 1;
  if (2 > i12) {
    i12 = 1;
    i13 = 1;
    i14 = 0;
  } else {
    i13 = newx->size[0];
    i12 = emlrtDynamicBoundsCheckFastR2012b(i12, 1, i13, &v_emlrtBCI, sp);
    i13 = -2;
    i14 = newx->size[0];
    emlrtDynamicBoundsCheckFastR2012b(2, 1, i14, &v_emlrtBCI, sp);
    i14 = 2;
  }

  i15 = newx->size[1];
  apnd = newx->size[1];
  emlrtDimSizeEqCheckFastR2012b(i15, apnd, &g_emlrtECI, sp);
  r = -1.5707963267948966 / (real_T)m;
  st.site = &ad_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  if (m - 1 < 1) {
    absb = -1;
    apnd = m - 1;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor((((real_T)m - 1.0) - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - m) + 2;
    absb = (int32_T)muDoubleScalarAbs((real_T)m - 1.0);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)
        muIntScalarMax_sint32(1, absb)) {
      ndbl++;
      apnd = m - 1;
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    if (ndbl >= 0) {
      absb = ndbl - 1;
    } else {
      absb = -1;
    }
  }

  i15 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = absb + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_y, i15, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (absb + 1 > 0) {
    b_y->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_y->data[absb] = apnd;
      i15 = absb + (absb < 0);
      if (i15 >= 0) {
        ndbl = (int32_T)((uint32_T)i15 >> 1);
      } else {
        ndbl = ~(int32_T)((uint32_T)~i15 >> 1);
      }

      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        b_y->data[cdiff] = 1.0 + (real_T)cdiff;
        b_y->data[absb - cdiff] = apnd - cdiff;
      }

      if (ndbl << 1 == absb) {
        b_y->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        b_y->data[ndbl] = 1.0 + (real_T)ndbl;
        b_y->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_creal_T(&c_st, &c_y, 2, &v_emlrtRTEI, true);
  i15 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = b_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i15, (int32_T)sizeof(creal_T),
                    &v_emlrtRTEI);
  ndbl = b_y->size[0] * b_y->size[1];
  for (i15 = 0; i15 < ndbl; i15++) {
    c_y->data[i15].re = b_y->data[i15] * 0.0;
    c_y->data[i15].im = b_y->data[i15] * r;
  }

  emxInit_creal_T(sp, &b_x, 2, &v_emlrtRTEI, true);
  i15 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = c_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_x, i15, (int32_T)sizeof(creal_T),
                    &v_emlrtRTEI);
  ndbl = c_y->size[0] * c_y->size[1];
  for (i15 = 0; i15 < ndbl; i15++) {
    b_x->data[i15] = c_y->data[i15];
  }

  for (cdiff = 0; cdiff < c_y->size[1]; cdiff++) {
    r = muDoubleScalarExp(b_x->data[cdiff].re / 2.0);
    x_im = b_x->data[cdiff].im;
    b_x_im = b_x->data[cdiff].im;
    b_x->data[cdiff].re = r * (r * muDoubleScalarCos(x_im));
    b_x->data[cdiff].im = r * (r * muDoubleScalarSin(b_x_im));
  }

  emxFree_creal_T(&c_y);
  c_emxInit_creal_T(sp, &z, 1, &x_emlrtRTEI, true);
  i15 = z->size[0];
  z->size[0] = 1 + b_x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)z, i15, (int32_T)sizeof(creal_T),
                    &v_emlrtRTEI);
  z->data[0].re = 1.4142135623730951;
  z->data[0].im = 0.0;
  ndbl = b_x->size[1];
  for (i15 = 0; i15 < ndbl; i15++) {
    z->data[i15 + 1].re = 2.0 * b_x->data[b_x->size[0] * i15].re;
    z->data[i15 + 1].im = 2.0 * b_x->data[b_x->size[0] * i15].im;
  }

  emxFree_creal_T(&b_x);
  emxInit_creal_T(sp, &b_newx, 2, &v_emlrtRTEI, true);
  ndbl = newx->size[1];
  cdiff = newx->size[1] - 1;
  i15 = b_newx->size[0] * b_newx->size[1];
  b_newx->size[0] = (div_s32_floor(sp, i11, i10) + div_s32_floor(sp, i14 - i12,
    i13)) + 2;
  b_newx->size[1] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_newx, i15, (int32_T)sizeof(creal_T),
                    &v_emlrtRTEI);
  for (i15 = 0; i15 < ndbl; i15++) {
    absb = div_s32_floor(sp, i11, i10);
    for (apnd = 0; apnd <= absb; apnd++) {
      b_newx->data[apnd + b_newx->size[0] * i15] = newx->data[i10 * apnd +
        newx->size[0] * i15];
    }
  }

  for (i15 = 0; i15 <= cdiff; i15++) {
    ndbl = div_s32_floor(sp, i14 - i12, i13);
    for (apnd = 0; apnd <= ndbl; apnd++) {
      b_newx->data[((apnd + div_s32_floor(sp, i11, i10)) + b_newx->size[0] * i15)
        + 1].re = newx->data[((i12 + i13 * apnd) + newx->size[0] * i15) - 1].re;
      b_newx->data[((apnd + div_s32_floor(sp, i11, i10)) + b_newx->size[0] * i15)
        + 1].im = newx->data[((i12 + i13 * apnd) + newx->size[0] * i15) - 1].im;
    }
  }

  st.site = &bd_emlrtRSI;
  b_fft(&st, b_newx, newx);
  emxFree_creal_T(&b_newx);
  for (i10 = 0; i10 < 2; i10++) {
    c_newx[i10] = newx->size[i10];
  }

  emxInit_creal_T(sp, &b_z, 2, &v_emlrtRTEI, true);
  ndbl = z->size[0];
  i10 = b_z->size[0] * b_z->size[1];
  b_z->size[0] = ndbl;
  b_z->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)b_z, i10, (int32_T)sizeof(creal_T),
                    &v_emlrtRTEI);
  for (i10 = 0; i10 < k; i10++) {
    for (i11 = 0; i11 < ndbl; i11++) {
      b_z->data[i11 + b_z->size[0] * i10] = z->data[i11];
    }
  }

  for (i10 = 0; i10 < 2; i10++) {
    c_z[i10] = b_z->size[i10];
  }

  emxFree_creal_T(&b_z);
  emlrtSizeEqCheck2DFastR2012b(c_newx, c_z, &h_emlrtECI, sp);
  i10 = y->size[0] * y->size[1];
  y->size[0] = newx->size[0];
  y->size[1] = newx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  ndbl = newx->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    cdiff = newx->size[0];
    for (i11 = 0; i11 < cdiff; i11++) {
      r = newx->data[i11 + newx->size[0] * i10].re * z->data[i11].re -
        newx->data[i11 + newx->size[0] * i10].im * z->data[i11].im;
      y->data[i11 + y->size[0] * i10] = r / a;
    }
  }

  emxFree_creal_T(&z);
  emxFree_creal_T(&newx);
  ndbl = y->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    tmp_data[i10] = i10;
  }

  cdiff = y->size[1];
  i10 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)b_y, i10, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  for (i10 = 0; i10 < cdiff; i10++) {
    b_y->data[b_y->size[0] * i10] = y->data[y->size[0] * i10];
  }

  iv27[0] = 1;
  iv27[1] = ndbl;
  emlrtSubAssignSizeCheckR2012b(iv27, 2, *(int32_T (*)[2])b_y->size, 2,
    &i_emlrtECI, sp);
  ndbl = b_y->size[1];
  for (i10 = 0; i10 < ndbl; i10++) {
    y->data[y->size[0] * tmp_data[i10]] = b_y->data[b_y->size[0] * i10];
  }

  emxFree_real_T(&b_y);
  if (fl != 0) {
    emxInit_real_T(sp, &tempTwo, 2, &y_emlrtRTEI, true);

    /* Was y=y.';  */
    i10 = tempTwo->size[0] * tempTwo->size[1];
    tempTwo->size[0] = y->size[0];
    tempTwo->size[1] = y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)tempTwo, i10, (int32_T)sizeof
                      (real_T), &v_emlrtRTEI);
    ndbl = y->size[0] * y->size[1];
    for (i10 = 0; i10 < ndbl; i10++) {
      tempTwo->data[i10] = y->data[i10];
    }

    for (i10 = 0; i10 < 2; i10++) {
      numRows[i10] = (uint32_T)y->size[i10];
    }

    cdiff = 1;
    while (cdiff - 1 <= (int32_T)numRows[0] - 1) {
      ndbl = 1;
      while (ndbl - 1 <= (int32_T)numRows[1] - 1) {
        i10 = y->size[0];
        i11 = y->size[1];
        i12 = tempTwo->size[0];
        i13 = tempTwo->size[1];
        y->data[(emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, i10, &w_emlrtBCI,
                  sp) + y->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
                   i11, &x_emlrtBCI, sp) - 1)) - 1] = tempTwo->data
          [(emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, i12, &y_emlrtBCI, sp) +
            tempTwo->size[0] * (emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, i13,
              &ab_emlrtBCI, sp) - 1)) - 1];
        ndbl++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      cdiff++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emxFree_real_T(&tempTwo);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (rdct.c) */
