/*
 * File: fft.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "fft.h"
#include "JenkinsCompare_emxutil.h"

/* Function Declarations */
static int div_s32(int numerator, int denominator);

/* Function Definitions */

/*
 * Arguments    : int numerator
 *                int denominator
 * Return Type  : int
 */
static int div_s32(int numerator, int denominator)
{
  int quotient;
  unsigned int absNumerator;
  unsigned int absDenominator;
  boolean_T quotientNeedsNegation;
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
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int)absNumerator;
    } else {
      quotient = (int)absNumerator;
    }
  }

  return quotient;
}

/*
 * Arguments    : const emxArray_creal_T *x
 *                emxArray_creal_T *y
 * Return Type  : void
 */
void fft(const emxArray_creal_T *x, emxArray_creal_T *y)
{
  unsigned int sz[2];
  int nd2;
  int minval;
  int ixDelta;
  emxArray_real_T *costab1q;
  int nRowsD2;
  int nRowsD4;
  int lastChan;
  double e;
  int k;
  emxArray_real_T *costab;
  emxArray_real_T *sintab;
  int n2;
  int ix;
  int chanStart;
  int i;
  boolean_T tst;
  double temp_re;
  double temp_im;
  int iDelta;
  int iDelta2;
  int iheight;
  int ihi;
  double twid_im;
  for (nd2 = 0; nd2 < 2; nd2++) {
    sz[nd2] = (unsigned int)x->size[nd2];
  }

  nd2 = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = (int)sz[1];
  emxEnsureCapacity((emxArray__common *)y, nd2, (int)sizeof(creal_T));
  if (x->size[0] == 0) {
  } else {
    minval = x->size[0];
    nd2 = (x->size[0] - minval) + 1;
    if (1 >= nd2) {
      ixDelta = 1;
    } else {
      ixDelta = nd2;
    }

    emxInit_real_T(&costab1q, 2);
    nd2 = x->size[0];
    nRowsD2 = nd2 / 2;
    nRowsD4 = nRowsD2 / 2;
    lastChan = x->size[0] * (div_s32(x->size[0] * x->size[1], x->size[0]) - 1);
    e = 6.2831853071795862 / (double)x->size[0];
    nd2 = costab1q->size[0] * costab1q->size[1];
    costab1q->size[0] = 1;
    costab1q->size[1] = nRowsD4 + 1;
    emxEnsureCapacity((emxArray__common *)costab1q, nd2, (int)sizeof(double));
    costab1q->data[0] = 1.0;
    nd2 = nRowsD4 / 2;
    for (k = 1; k <= nd2; k++) {
      costab1q->data[k] = cos(e * (double)k);
    }

    for (k = nd2 + 1; k < nRowsD4; k++) {
      costab1q->data[k] = sin(e * (double)(nRowsD4 - k));
    }

    emxInit_real_T(&costab, 2);
    emxInit_real_T(&sintab, 2);
    costab1q->data[nRowsD4] = 0.0;
    n2 = (costab1q->size[1] - 1) << 1;
    nd2 = costab->size[0] * costab->size[1];
    costab->size[0] = 1;
    costab->size[1] = n2 + 1;
    emxEnsureCapacity((emxArray__common *)costab, nd2, (int)sizeof(double));
    nd2 = sintab->size[0] * sintab->size[1];
    sintab->size[0] = 1;
    sintab->size[1] = n2 + 1;
    emxEnsureCapacity((emxArray__common *)sintab, nd2, (int)sizeof(double));
    costab->data[0] = 1.0;
    sintab->data[0] = 0.0;
    for (k = 1; k < costab1q->size[1]; k++) {
      costab->data[k] = costab1q->data[k];
      sintab->data[k] = -costab1q->data[(costab1q->size[1] - k) - 1];
    }

    for (k = costab1q->size[1]; k <= n2; k++) {
      costab->data[k] = -costab1q->data[n2 - k];
      sintab->data[k] = -costab1q->data[(k - costab1q->size[1]) + 1];
    }

    emxFree_real_T(&costab1q);
    ix = 0;
    for (chanStart = 0; chanStart <= lastChan; chanStart += x->size[0]) {
      n2 = 0;
      nd2 = chanStart;
      for (i = 1; i < minval; i++) {
        y->data[nd2] = x->data[ix];
        nd2 = x->size[0];
        tst = true;
        while (tst) {
          nd2 >>= 1;
          n2 ^= nd2;
          tst = ((n2 & nd2) == 0);
        }

        nd2 = chanStart + n2;
        ix++;
      }

      y->data[nd2] = x->data[ix];
      ix += ixDelta;
      nd2 = (chanStart + x->size[0]) - 2;
      if (x->size[0] > 1) {
        for (i = chanStart; i <= nd2; i += 2) {
          temp_re = y->data[i + 1].re;
          temp_im = y->data[i + 1].im;
          y->data[i + 1].re = y->data[i].re - y->data[i + 1].re;
          y->data[i + 1].im = y->data[i].im - y->data[i + 1].im;
          y->data[i].re += temp_re;
          y->data[i].im += temp_im;
        }
      }

      iDelta = 2;
      iDelta2 = 4;
      k = nRowsD4;
      iheight = 1 + ((nRowsD4 - 1) << 2);
      while (k > 0) {
        i = chanStart;
        ihi = chanStart + iheight;
        while (i < ihi) {
          nd2 = i + iDelta;
          temp_re = y->data[nd2].re;
          temp_im = y->data[nd2].im;
          y->data[i + iDelta].re = y->data[i].re - y->data[nd2].re;
          y->data[i + iDelta].im = y->data[i].im - y->data[nd2].im;
          y->data[i].re += temp_re;
          y->data[i].im += temp_im;
          i += iDelta2;
        }

        nd2 = chanStart + 1;
        for (n2 = k; n2 < nRowsD2; n2 += k) {
          e = costab->data[n2];
          twid_im = sintab->data[n2];
          i = nd2;
          ihi = nd2 + iheight;
          while (i < ihi) {
            temp_re = e * y->data[i + iDelta].re - twid_im * y->data[i + iDelta]
              .im;
            temp_im = e * y->data[i + iDelta].im + twid_im * y->data[i + iDelta]
              .re;
            y->data[i + iDelta].re = y->data[i].re - temp_re;
            y->data[i + iDelta].im = y->data[i].im - temp_im;
            y->data[i].re += temp_re;
            y->data[i].im += temp_im;
            i += iDelta2;
          }

          nd2++;
        }

        k /= 2;
        iDelta = iDelta2;
        iDelta2 <<= 1;
        iheight -= iDelta;
      }
    }

    emxFree_real_T(&sintab);
    emxFree_real_T(&costab);
  }
}

/*
 * File trailer for fft.c
 *
 * [EOF]
 */
