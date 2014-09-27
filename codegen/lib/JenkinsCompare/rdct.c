/*
 * File: rdct.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "rdct.h"
#include "JenkinsCompare_emxutil.h"
#include "fft.h"

/* Function Declarations */
static int div_s32_floor(int numerator, int denominator);

/* Function Definitions */

/*
 * Arguments    : int numerator
 *                int denominator
 * Return Type  : int
 */
static int div_s32_floor(int numerator, int denominator)
{
  int quotient;
  unsigned int absNumerator;
  unsigned int absDenominator;
  boolean_T quotientNeedsNegation;
  unsigned int tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    if (numerator >= 0) {
      absNumerator = (unsigned int)numerator;
    } else {
      absNumerator = (unsigned int)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (unsigned int)denominator;
    } else {
      absDenominator = (unsigned int)-denominator;
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
      quotient = -(int)tempAbsQuotient;
    } else {
      quotient = (int)tempAbsQuotient;
    }
  }

  return quotient;
}

/*
 * RDCT     Discrete cosine transform of real data Y=(X,N,A,B)
 *  Data is truncated/padded to length N.
 *
 *  This routine is equivalent to multiplying by the matrix
 *
 *    rdct(eye(n)) = diag([sqrt(2)*B/A repmat(2/A,1,n-1)]) * cos((0:n-1)'*(0.5:n)*pi/n)
 *
 *  Default values of the scaling factors are A=sqrt(2N) and B=1 which
 *  results in an orthogonal matrix. Other common values are A=1 or N and/or B=1 or sqrt(2).
 *  If b~=1 then the columns are no longer orthogonal.
 *
 *  see IRDCT for the inverse transform
 * Arguments    : const emxArray_creal_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void rdct(const emxArray_creal_T *x, emxArray_real_T *y)
{
  int fl;
  emxArray_creal_T *newx;
  int ndbl;
  int i4;
  unsigned int counter;
  unsigned int numRows[2];
  int cdiff;
  int m;
  double a;
  emxArray_real_T *tempTwo;
  emxArray_real_T *b_y;
  int i5;
  int i6;
  int i7;
  int i8;
  double r;
  int absb;
  int apnd;
  int i9;
  emxArray_creal_T *c_y;
  emxArray_creal_T *b_x;
  double x_im;
  double b_x_im;
  emxArray_creal_T *z;
  emxArray_creal_T *b_newx;

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

  emxInit_creal_T(&newx, 2);
  if (fl != 0) {
    ndbl = x->size[0] * x->size[1];
    i4 = newx->size[0] * newx->size[1];
    newx->size[0] = ndbl;
    emxEnsureCapacity((emxArray__common *)newx, i4, (int)sizeof(creal_T));
    i4 = newx->size[0] * newx->size[1];
    newx->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)newx, i4, (int)sizeof(creal_T));
    ndbl = x->size[0] * x->size[1];
    for (i4 = 0; i4 < ndbl; i4++) {
      newx->data[i4].re = 0.0;
      newx->data[i4].im = 0.0;
    }

    counter = 1U;
    for (i4 = 0; i4 < 2; i4++) {
      numRows[i4] = (unsigned int)x->size[i4];
    }

    for (ndbl = 0; ndbl < (int)numRows[1]; ndbl++) {
      for (cdiff = 0; cdiff < (int)numRows[0]; cdiff++) {
        newx->data[(int)counter - 1] = x->data[cdiff + x->size[0] * ndbl];
        counter++;
      }
    }

    /* Was x=x(:); */
  } else {
    i4 = newx->size[0] * newx->size[1];
    newx->size[0] = x->size[0];
    newx->size[1] = x->size[1];
    emxEnsureCapacity((emxArray__common *)newx, i4, (int)sizeof(creal_T));
    ndbl = x->size[0] * x->size[1];
    for (i4 = 0; i4 < ndbl; i4++) {
      newx->data[i4] = x->data[i4];
    }
  }

  m = newx->size[0];
  a = sqrt(2.0 * (double)newx->size[0]);
  emxInit_real_T(&tempTwo, 2);
  emxInit_real_T(&b_y, 2);
  if (1 > m) {
    i4 = 1;
    i5 = -1;
  } else {
    i4 = 2;
    i5 = m - 1;
  }

  i6 = (int)floor((double)m / 2.0) << 1;
  if (2 > i6) {
    i6 = 1;
    i7 = 1;
    i8 = 0;
  } else {
    i7 = -2;
    i8 = 2;
  }

  r = -1.5707963267948966 / (double)m;
  if (m - 1 < 1) {
    absb = -1;
    apnd = m - 1;
  } else {
    ndbl = (int)floor((((double)m - 1.0) - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - m) + 2;
    absb = (int)fabs((double)m - 1.0);
    if (1 >= absb) {
      absb = 1;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * (double)absb) {
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

  i9 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = absb + 1;
  emxEnsureCapacity((emxArray__common *)b_y, i9, (int)sizeof(double));
  if (absb + 1 > 0) {
    b_y->data[0] = 1.0;
    if (absb + 1 > 1) {
      b_y->data[absb] = apnd;
      ndbl = absb / 2;
      for (cdiff = 1; cdiff < ndbl; cdiff++) {
        b_y->data[cdiff] = 1.0 + (double)cdiff;
        b_y->data[absb - cdiff] = apnd - cdiff;
      }

      if (ndbl << 1 == absb) {
        b_y->data[ndbl] = (1.0 + (double)apnd) / 2.0;
      } else {
        b_y->data[ndbl] = 1.0 + (double)ndbl;
        b_y->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_creal_T(&c_y, 2);
  i9 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = b_y->size[1];
  emxEnsureCapacity((emxArray__common *)c_y, i9, (int)sizeof(creal_T));
  ndbl = b_y->size[0] * b_y->size[1];
  for (i9 = 0; i9 < ndbl; i9++) {
    c_y->data[i9].re = b_y->data[i9] * 0.0;
    c_y->data[i9].im = b_y->data[i9] * r;
  }

  emxFree_real_T(&b_y);
  emxInit_creal_T(&b_x, 2);
  i9 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = c_y->size[1];
  emxEnsureCapacity((emxArray__common *)b_x, i9, (int)sizeof(creal_T));
  ndbl = c_y->size[0] * c_y->size[1];
  for (i9 = 0; i9 < ndbl; i9++) {
    b_x->data[i9] = c_y->data[i9];
  }

  for (cdiff = 0; cdiff < c_y->size[1]; cdiff++) {
    r = exp(b_x->data[cdiff].re / 2.0);
    x_im = b_x->data[cdiff].im;
    b_x_im = b_x->data[cdiff].im;
    b_x->data[cdiff].re = r * (r * cos(x_im));
    b_x->data[cdiff].im = r * (r * sin(b_x_im));
  }

  emxFree_creal_T(&c_y);
  c_emxInit_creal_T(&z, 1);
  i9 = z->size[0];
  z->size[0] = 1 + b_x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i9, (int)sizeof(creal_T));
  z->data[0].re = 1.4142135623730951;
  z->data[0].im = 0.0;
  ndbl = b_x->size[1];
  for (i9 = 0; i9 < ndbl; i9++) {
    z->data[i9 + 1].re = 2.0 * b_x->data[b_x->size[0] * i9].re;
    z->data[i9 + 1].im = 2.0 * b_x->data[b_x->size[0] * i9].im;
  }

  emxFree_creal_T(&b_x);
  emxInit_creal_T(&b_newx, 2);
  ndbl = newx->size[1];
  cdiff = newx->size[1] - 1;
  i9 = b_newx->size[0] * b_newx->size[1];
  b_newx->size[0] = (div_s32_floor(i5, i4) + div_s32_floor(i8 - i6, i7)) + 2;
  b_newx->size[1] = ndbl;
  emxEnsureCapacity((emxArray__common *)b_newx, i9, (int)sizeof(creal_T));
  for (i9 = 0; i9 < ndbl; i9++) {
    m = div_s32_floor(i5, i4);
    for (absb = 0; absb <= m; absb++) {
      b_newx->data[absb + b_newx->size[0] * i9] = newx->data[i4 * absb +
        newx->size[0] * i9];
    }
  }

  for (i9 = 0; i9 <= cdiff; i9++) {
    ndbl = div_s32_floor(i8 - i6, i7);
    for (absb = 0; absb <= ndbl; absb++) {
      b_newx->data[((absb + div_s32_floor(i5, i4)) + b_newx->size[0] * i9) + 1].
        re = newx->data[((i6 + i7 * absb) + newx->size[0] * i9) - 1].re;
      b_newx->data[((absb + div_s32_floor(i5, i4)) + b_newx->size[0] * i9) + 1].
        im = newx->data[((i6 + i7 * absb) + newx->size[0] * i9) - 1].im;
    }
  }

  fft(b_newx, newx);
  i4 = y->size[0] * y->size[1];
  y->size[0] = newx->size[0];
  y->size[1] = newx->size[1];
  emxEnsureCapacity((emxArray__common *)y, i4, (int)sizeof(double));
  ndbl = newx->size[1];
  emxFree_creal_T(&b_newx);
  for (i4 = 0; i4 < ndbl; i4++) {
    cdiff = newx->size[0];
    for (i5 = 0; i5 < cdiff; i5++) {
      r = newx->data[i5 + newx->size[0] * i4].re * z->data[i5].re - newx->
        data[i5 + newx->size[0] * i4].im * z->data[i5].im;
      y->data[i5 + y->size[0] * i4] = r / a;
    }
  }

  emxFree_creal_T(&z);
  emxFree_creal_T(&newx);
  if (fl != 0) {
    /* Was y=y.';  */
    i4 = tempTwo->size[0] * tempTwo->size[1];
    tempTwo->size[0] = y->size[0];
    tempTwo->size[1] = y->size[1];
    emxEnsureCapacity((emxArray__common *)tempTwo, i4, (int)sizeof(double));
    ndbl = y->size[0] * y->size[1];
    for (i4 = 0; i4 < ndbl; i4++) {
      tempTwo->data[i4] = y->data[i4];
    }

    for (i4 = 0; i4 < 2; i4++) {
      numRows[i4] = (unsigned int)y->size[i4];
    }

    for (cdiff = 0; cdiff < (int)numRows[0]; cdiff++) {
      for (ndbl = 0; ndbl < (int)numRows[1]; ndbl++) {
        y->data[cdiff + y->size[0] * ndbl] = tempTwo->data[ndbl + tempTwo->size
          [0] * cdiff];
      }
    }
  }

  emxFree_real_T(&tempTwo);
}

/*
 * File trailer for rdct.c
 *
 * [EOF]
 */
