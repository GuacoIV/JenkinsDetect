/*
 * File: melbankm.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "melbankm.h"
#include "JenkinsCompare_emxutil.h"
#include "abs.h"
#include "norm.h"
#include "floor.h"
#include "frq2mel.h"
#include "mel2frq.h"

/* Function Declarations */
static void b_eml_null_assignment(emxArray_real_T *x, double idx);
static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
static void eml_null_assignment(emxArray_real_T *x);
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *x
 *                double idx
 * Return Type  : void
 */
static void b_eml_null_assignment(emxArray_real_T *x, double idx)
{
  int nxin;
  int k;
  emxArray_real_T *b_x;
  nxin = x->size[1] - 1;
  for (k = (int)idx; k <= nxin; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (1 > nxin) {
    nxin = 0;
  }

  emxInit_real_T(&b_x, 2);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = nxin;
  emxEnsureCapacity((emxArray__common *)b_x, k, (int)sizeof(double));
  for (k = 0; k < nxin; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, k, (int)sizeof(double));
  nxin = b_x->size[1];
  for (k = 0; k < nxin; k++) {
    x->data[x->size[0] * k] = b_x->data[b_x->size[0] * k];
  }

  emxFree_real_T(&b_x);
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *y
 * Return Type  : void
 */
static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int k;
  int i;
  int j;
  k = 0;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
static void eml_null_assignment(emxArray_real_T *x)
{
  int nxin;
  int k;
  emxArray_real_T *b_x;
  nxin = x->size[1] - 1;
  for (k = 1; k <= nxin; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (1 > nxin) {
    nxin = 0;
  }

  emxInit_real_T(&b_x, 2);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = nxin;
  emxEnsureCapacity((emxArray__common *)b_x, k, (int)sizeof(double));
  for (k = 0; k < nxin; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, k, (int)sizeof(double));
  nxin = b_x->size[1];
  for (k = 0; k < nxin; k++) {
    x->data[x->size[0] * k] = b_x->data[b_x->size[0] * k];
  }

  emxFree_real_T(&b_x);
}

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * MELBANKM determine matrix for a mel/erb/bark-spaced filterbank [X,MN,MX]=(P,N,FS,FL,FH,W)
 *
 *  Inputs:
 *        p   number of filters in filterbank or the filter spacing in k-mel/bark/erb [ceil(4.6*log10(fs))]
 *   n   length of fft
 *   fs  sample rate in Hz
 *   fl  low end of the lowest filter as a fraction of fs [default = 0]
 *   fh  high end of highest filter as a fraction of fs [default = 0.5]
 *   w   any sensible combination of the following:
 *              'b' = bark scale instead of mel
 *              'e' = erb-rate scale
 *              'l' = log10 Hz frequency scale
 *              'f' = linear frequency scale
 *
 *              'c' = fl/fh specify centre of low and high filters
 *              'h' = fl/fh are in Hz instead of fractions of fs
 *              'H' = fl/fh are in mel/erb/bark/log10
 *
 *         't' = triangular shaped filters in mel/erb/bark domain (default)
 *         'n' = hanning shaped filters in mel/erb/bark domain
 *         'm' = hamming shaped filters in mel/erb/bark domain
 *
 *         'z' = highest and lowest filters taper down to zero [default]
 *         'y' = lowest filter remains at 1 down to 0 frequency and
 *            highest filter remains at 1 up to nyquist freqency
 *
 *              'u' = scale filters to sum to unity
 *
 *              's' = single-sided: do not double filters to account for negative frequencies
 *
 *              'g' = plot idealized filters [default if no output arguments present]
 *
 *  Note that the filter shape (triangular, hamming etc) is defined in the mel (or erb etc) domain.
 *  Some people instead define an asymmetric triangular filter in the frequency domain.
 *
 *          If 'ty' or 'ny' is specified, the total power in the fft is preserved.
 *
 *  Outputs: x     a sparse matrix containing the filterbank amplitudes
 *             If the mn and mx outputs are given then size(x)=[p,mx-mn+1]
 *                  otherwise size(x)=[p,1+floor(n/2)]
 *                  Note that the peak filter values equal 2 to account for the power
 *                  in the negative FFT frequencies.
 *            mc    the filterbank centre frequencies in mel/erb/bark
 *       mn    the lowest fft bin with a non-zero coefficient
 *       mx    the highest fft bin with a non-zero coefficient
 *                  Note: you must specify both or neither of mn and mx.
 *
 *  Examples of use:
 *
 *  (a) Calcuate the Mel-frequency Cepstral Coefficients
 *
 *        f=rfft(s);           % rfft() returns only 1+floor(n/2) coefficients
 *   x=melbankm(p,n,fs);         % n is the fft length, p is the number of filters wanted
 *   z=log(x*abs(f).^2);         % multiply x by the power spectrum
 *   c=dct(z);                   % take the DCT
 *
 *  (b) Calcuate the Mel-frequency Cepstral Coefficients efficiently
 *
 *        f=fft(s);                        % n is the fft length, p is the number of filters wanted
 *        [x,mc,na,nb]=melbankm(p,n,fs);   % na:nb gives the fft bins that are needed
 *        z=log(x*(f(na:nb)).*conj(f(na:nb)));
 *
 *  (c) Plot the calculated filterbanks
 *
 *       plot((0:floor(n/2))*fs/n,melbankm(p,n,fs)')   % fs=sample frequency
 *
 *  (d) Plot the idealized filterbanks (without output sampling)
 *
 *       melbankm(p,n,fs);
 *
 *  References:
 *
 *  [1] S. S. Stevens, J. Volkman, and E. B. Newman. A scale for the measurement
 *      of the psychological magnitude of pitch. J. Acoust Soc Amer, 8: 185–19, 1937.
 *  [2] S. Davis and P. Mermelstein. Comparison of parametric representations for
 *      monosyllabic word recognition in continuously spoken sentences.
 *      IEEE Trans Acoustics Speech and Signal Processing, 28 (4): 357–366, Aug. 1980.
 * Arguments    : double p
 *                double fs
 *                emxArray_real_T *x
 *                emxArray_real_T *mc
 *                double *mn
 * Return Type  : void
 */
void melbankm(double p, double fs, emxArray_real_T *x, emxArray_real_T *mc,
              double *mn)
{
  double dv3[2];
  int i3;
  double mflh[2];
  double b_x;
  double melinc;
  double blim[4];
  double b_mflh[4];
  double c_x;
  double b1;
  double b4;
  int xtmp;
  double apnd;
  double ndbl;
  double cdiff;
  double absa;
  double absb;
  emxArray_real_T *y;
  int nm1d2;
  int k;
  emxArray_real_T *b_y;
  int b_apnd;
  emxArray_real_T *pf;
  emxArray_real_T *fp;
  emxArray_boolean_T *msk;
  int ii_data[1];
  boolean_T exitg4;
  int b_ii_data[1];
  int k2_size[2];
  double k2_data[1];
  boolean_T exitg3;
  int k3_size[2];
  double k3_data[1];
  emxArray_real_T *r;
  unsigned int b_absa;
  unsigned int u1;
  emxArray_real_T *c_y;
  emxArray_real_T *c;
  emxArray_real_T *b_c;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  boolean_T exitg2;
  boolean_T exitg1;

  /*       Copyright (C) Mike Brookes 1997-2009 */
  /*       Version: $Id: melbankm.m 713 2011-10-16 14:45:43Z dmb $ */
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
  /*  Note "FFT bin_0" assumes DC = bin 0 whereas "FFT bin_1" means DC = bin 1 */
  /*  1 if single sided else 2 */
  /*  default warping is mel */
  for (i3 = 0; i3 < 2; i3++) {
    dv3[i3] = 0.5 * (double)i3 * fs;
  }

  frq2mel(dv3, mflh);

  /*  convert frequency limits into mel */
  b_x = 0.0;
  for (i3 = 0; i3 < 2; i3++) {
    b_x += mflh[i3] * (-1.0 + 2.0 * (double)i3);
  }

  /*  mel range */
  /*  bin index of highest positive frequency (Nyquist if n is even) */
  if (p < 1.0) {
    p = rt_roundd_snf(b_x / (p * 1000.0)) - 1.0;
  }

  melinc = b_x / (p + 1.0);

  /*  */
  /*  Calculate the FFT bins corresponding to [filter#1-low filter#1-mid filter#p-mid filter#p-high] */
  /*  */
  blim[0] = 0.0;
  blim[1] = 1.0;
  blim[2] = p;
  blim[3] = p + 1.0;
  for (i3 = 0; i3 < 4; i3++) {
    b_mflh[i3] = mflh[0] + blim[i3] * melinc;
  }

  mel2frq(b_mflh, blim);
  for (i3 = 0; i3 < 4; i3++) {
    blim[i3] = blim[i3] * 512.0 / fs;
  }

  /*  mel centre frequencies */
  c_x = floor(blim[0]);
  b1 = floor(blim[0]) + 1.0;

  /*  lowest FFT bin_0 required might be negative) */
  b_x = ceil(blim[3]);
  if ((256.0 <= b_x - 1.0) || rtIsNaN(b_x - 1.0)) {
    b4 = 256.0;
  } else {
    b4 = b_x - 1.0;
  }

  /*  highest FFT bin_0 required */
  /*  */
  /*  now map all the useful FFT bins_0 to filter1 centres */
  /*  */
  if (rtIsNaN(b1) || rtIsNaN(b4)) {
    xtmp = 0;
    b_x = rtNaN;
    apnd = b4;
  } else if (b4 < c_x + 1.0) {
    xtmp = -1;
    b_x = c_x + 1.0;
    apnd = b4;
  } else if (rtIsInf(b1) || rtIsInf(b4)) {
    xtmp = 0;
    b_x = rtNaN;
    apnd = b4;
  } else {
    b_x = c_x + 1.0;
    ndbl = floor((b4 - (c_x + 1.0)) + 0.5);
    apnd = (c_x + 1.0) + ndbl;
    cdiff = apnd - b4;
    absa = fabs(c_x + 1.0);
    absb = fabs(b4);
    if ((absa >= absb) || rtIsNaN(absb)) {
      absb = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * absb) {
      ndbl++;
      apnd = b4;
    } else if (cdiff > 0.0) {
      apnd = (c_x + 1.0) + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      xtmp = (int)ndbl - 1;
    } else {
      xtmp = -1;
    }
  }

  emxInit_real_T(&y, 2);
  i3 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = xtmp + 1;
  emxEnsureCapacity((emxArray__common *)y, i3, (int)sizeof(double));
  if (xtmp + 1 > 0) {
    y->data[0] = b_x;
    if (xtmp + 1 > 1) {
      y->data[xtmp] = apnd;
      nm1d2 = xtmp / 2;
      for (k = 1; k < nm1d2; k++) {
        y->data[k] = b_x + (double)k;
        y->data[xtmp - k] = apnd - (double)k;
      }

      if (nm1d2 << 1 == xtmp) {
        y->data[nm1d2] = (b_x + apnd) / 2.0;
      } else {
        y->data[nm1d2] = b_x + (double)nm1d2;
        y->data[nm1d2 + 1] = apnd - (double)nm1d2;
      }
    }
  }

  emxInit_real_T(&b_y, 2);
  i3 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity((emxArray__common *)b_y, i3, (int)sizeof(double));
  b_apnd = y->size[0] * y->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    b_y->data[i3] = y->data[i3] * fs / 512.0;
  }

  emxInit_real_T(&pf, 2);
  b_frq2mel(b_y, pf);
  i3 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)pf, i3, (int)sizeof(double));
  nm1d2 = pf->size[0];
  xtmp = pf->size[1];
  b_apnd = nm1d2 * xtmp;
  emxFree_real_T(&b_y);
  for (i3 = 0; i3 < b_apnd; i3++) {
    pf->data[i3] -= mflh[0];
  }

  i3 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)pf, i3, (int)sizeof(double));
  nm1d2 = pf->size[0];
  xtmp = pf->size[1];
  b_apnd = nm1d2 * xtmp;
  for (i3 = 0; i3 < b_apnd; i3++) {
    pf->data[i3] /= melinc;
  }

  /*  */
  /*   remove any incorrect entries in pf due to rounding errors */
  /*  */
  if (pf->data[0] < 0.0) {
    eml_null_assignment(pf);
    b1 = (c_x + 1.0) + 1.0;
  }

  if (pf->data[pf->size[1] - 1] >= p + 1.0) {
    i3 = pf->size[1];
    b_eml_null_assignment(pf, i3);
    b4--;
  }

  emxInit_real_T(&fp, 2);
  i3 = fp->size[0] * fp->size[1];
  fp->size[0] = 1;
  fp->size[1] = pf->size[1];
  emxEnsureCapacity((emxArray__common *)fp, i3, (int)sizeof(double));
  b_apnd = pf->size[0] * pf->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    fp->data[i3] = pf->data[i3];
  }

  b_floor(fp);

  /*  FFT bin_0 i contributes to filters_1 fp(1+i-b1)+[0 1] */
  i3 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)pf, i3, (int)sizeof(double));
  nm1d2 = pf->size[0];
  xtmp = pf->size[1];
  b_apnd = nm1d2 * xtmp;
  for (i3 = 0; i3 < b_apnd; i3++) {
    pf->data[i3] -= fp->data[i3];
  }

  emxInit_boolean_T(&msk, 2);

  /*  multiplier for upper filter */
  i3 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  msk->size[1] = fp->size[1];
  emxEnsureCapacity((emxArray__common *)msk, i3, (int)sizeof(boolean_T));
  b_apnd = fp->size[0] * fp->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    msk->data[i3] = (fp->data[i3] > 0.0);
  }

  if (1 <= msk->size[1]) {
    k = 1;
  } else {
    k = 0;
  }

  nm1d2 = 0;
  xtmp = 1;
  exitg4 = false;
  while ((!exitg4) && (xtmp <= msk->size[1])) {
    if (msk->data[xtmp - 1]) {
      nm1d2 = 1;
      ii_data[0] = xtmp;
      exitg4 = true;
    } else {
      xtmp++;
    }
  }

  if (k == 1) {
    if (nm1d2 == 0) {
      k = 0;
    }
  } else {
    if (1 > nm1d2) {
      b_apnd = -1;
    } else {
      b_apnd = 0;
    }

    i3 = 0;
    while (i3 <= b_apnd) {
      b_ii_data[0] = ii_data[0];
      i3 = 1;
    }

    k = b_apnd + 1;
    b_apnd++;
    i3 = 0;
    while (i3 <= b_apnd - 1) {
      ii_data[0] = b_ii_data[0];
      i3 = 1;
    }
  }

  k2_size[0] = 1;
  k2_size[1] = k;
  b_apnd = k;
  i3 = 0;
  while (i3 <= b_apnd - 1) {
    k2_data[0] = ii_data[0];
    i3 = 1;
  }

  /*  FFT bin_1 k2+b1 is the first to contribute to both upper and lower filters */
  i3 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  msk->size[1] = fp->size[1];
  emxEnsureCapacity((emxArray__common *)msk, i3, (int)sizeof(boolean_T));
  b_apnd = fp->size[0] * fp->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    msk->data[i3] = (fp->data[i3] < p);
  }

  if (1 <= msk->size[1]) {
    k = 1;
  } else {
    k = 0;
  }

  nm1d2 = 0;
  xtmp = msk->size[1];
  exitg3 = false;
  while ((!exitg3) && (xtmp > 0)) {
    if (msk->data[xtmp - 1]) {
      nm1d2 = 1;
      ii_data[0] = xtmp;
      exitg3 = true;
    } else {
      xtmp--;
    }
  }

  if (k == 1) {
    if (nm1d2 == 0) {
      k = 0;
    }
  } else {
    if (1 > nm1d2) {
      b_apnd = -1;
    } else {
      b_apnd = 0;
    }

    i3 = 0;
    while (i3 <= b_apnd) {
      b_ii_data[0] = ii_data[0];
      i3 = 1;
    }

    k = b_apnd + 1;
    nm1d2 = b_apnd + 1;
    i3 = 0;
    while (i3 <= nm1d2 - 1) {
      ii_data[0] = b_ii_data[0];
      i3 = 1;
    }

    i3 = b_apnd + 1;
    nm1d2 = i3 / 2;
    xtmp = 1;
    while (xtmp <= nm1d2) {
      xtmp = ii_data[0];
      ii_data[b_apnd] = xtmp;
      xtmp = 2;
    }
  }

  k3_size[0] = 1;
  k3_size[1] = k;
  b_apnd = k;
  i3 = 0;
  while (i3 <= b_apnd - 1) {
    k3_data[0] = ii_data[0];
    i3 = 1;
  }

  /*  FFT bin_1 k3+b1 is the last to contribute to both upper and lower filters */
  /*  FFT bin_1 k4+b1 is the last to contribute to any filters */
  if (k2_size[1] == 0) {
    k2_size[0] = 1;
    k2_size[1] = 1;
    k2_data[0] = (double)fp->size[1] + 1.0;
  }

  if (k == 0) {
    k3_size[0] = 1;
    k3_size[1] = 1;
    k3_data[0] = 0.0;
  }

  b_x = norm(k3_data, k3_size);
  if (1.0 > b_x) {
    b_apnd = 0;
  } else {
    b_apnd = (int)b_x;
  }

  b_x = norm(k2_data, k2_size);
  if (b_x > fp->size[1]) {
    i3 = 0;
    xtmp = 0;
  } else {
    i3 = (int)b_x - 1;
    xtmp = fp->size[1];
  }

  emxInit_real_T(&r, 2);
  nm1d2 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (b_apnd + xtmp) - i3;
  emxEnsureCapacity((emxArray__common *)r, nm1d2, (int)sizeof(double));
  for (nm1d2 = 0; nm1d2 < b_apnd; nm1d2++) {
    r->data[r->size[0] * nm1d2] = 1.0 + fp->data[nm1d2];
  }

  nm1d2 = xtmp - i3;
  for (xtmp = 0; xtmp < nm1d2; xtmp++) {
    r->data[r->size[0] * (xtmp + b_apnd)] = fp->data[i3 + xtmp];
  }

  /*  filter number_1 */
  if (k3_data[0] < 1.0) {
    xtmp = -1;
    b_apnd = 0;
  } else {
    xtmp = (int)floor((k3_data[0] - 1.0) + 0.5);
    b_apnd = xtmp + 1;
    nm1d2 = (xtmp - (int)k3_data[0]) + 1;
    if (fabs(nm1d2) < 4.4408920985006262E-16 * (double)(int)k3_data[0]) {
      xtmp++;
      b_apnd = (int)k3_data[0];
    } else if (nm1d2 > 0) {
      b_apnd = xtmp;
    } else {
      xtmp++;
    }

    xtmp--;
  }

  i3 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = xtmp + 1;
  emxEnsureCapacity((emxArray__common *)y, i3, (int)sizeof(double));
  if (xtmp + 1 > 0) {
    y->data[0] = 1.0;
    if (xtmp + 1 > 1) {
      y->data[xtmp] = b_apnd;
      nm1d2 = xtmp / 2;
      for (k = 1; k < nm1d2; k++) {
        y->data[k] = 1.0 + (double)k;
        y->data[xtmp - k] = b_apnd - k;
      }

      if (nm1d2 << 1 == xtmp) {
        y->data[nm1d2] = (1.0 + (double)b_apnd) / 2.0;
      } else {
        y->data[nm1d2] = 1.0 + (double)nm1d2;
        y->data[nm1d2 + 1] = b_apnd - nm1d2;
      }
    }
  }

  if (fp->size[1] < k2_data[0]) {
    xtmp = -1;
    b_x = k2_data[0];
    apnd = fp->size[1];
  } else {
    b_x = k2_data[0];
    ndbl = floor(((double)fp->size[1] - k2_data[0]) + 0.5);
    apnd = k2_data[0] + ndbl;
    cdiff = apnd - (double)fp->size[1];
    b_absa = (unsigned int)fabs(k2_data[0]);
    nm1d2 = fp->size[1];
    u1 = (unsigned int)nm1d2;
    if (b_absa >= u1) {
      u1 = b_absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * (double)u1) {
      ndbl++;
      apnd = fp->size[1];
    } else if (cdiff > 0.0) {
      apnd = k2_data[0] + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      xtmp = (int)ndbl - 1;
    } else {
      xtmp = -1;
    }
  }

  emxInit_real_T(&c_y, 2);
  i3 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = xtmp + 1;
  emxEnsureCapacity((emxArray__common *)c_y, i3, (int)sizeof(double));
  if (xtmp + 1 > 0) {
    c_y->data[0] = b_x;
    if (xtmp + 1 > 1) {
      c_y->data[xtmp] = apnd;
      nm1d2 = xtmp / 2;
      for (k = 1; k < nm1d2; k++) {
        c_y->data[k] = b_x + (double)k;
        c_y->data[xtmp - k] = apnd - (double)k;
      }

      if (nm1d2 << 1 == xtmp) {
        c_y->data[nm1d2] = (b_x + apnd) / 2.0;
      } else {
        c_y->data[nm1d2] = b_x + (double)nm1d2;
        c_y->data[nm1d2 + 1] = apnd - (double)nm1d2;
      }
    }
  }

  emxInit_real_T(&c, 2);
  i3 = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = y->size[1] + c_y->size[1];
  emxEnsureCapacity((emxArray__common *)c, i3, (int)sizeof(double));
  b_apnd = y->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    c->data[c->size[0] * i3] = y->data[y->size[0] * i3];
  }

  b_apnd = c_y->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    c->data[c->size[0] * (i3 + y->size[1])] = c_y->data[c_y->size[0] * i3];
  }

  emxFree_real_T(&c_y);

  /*  FFT bin_1 - b1 */
  if (1.0 > k3_data[0]) {
    b_apnd = 0;
  } else {
    b_apnd = (int)k3_data[0];
  }

  b_absa = (unsigned int)fabs(k2_data[0]);
  if (b_absa > (unsigned int)fp->size[1]) {
    i3 = 0;
    xtmp = 0;
  } else {
    i3 = (int)b_absa - 1;
    xtmp = fp->size[1];
  }

  nm1d2 = fp->size[0] * fp->size[1];
  fp->size[0] = 1;
  fp->size[1] = (b_apnd + xtmp) - i3;
  emxEnsureCapacity((emxArray__common *)fp, nm1d2, (int)sizeof(double));
  for (nm1d2 = 0; nm1d2 < b_apnd; nm1d2++) {
    fp->data[fp->size[0] * nm1d2] = pf->data[nm1d2];
  }

  nm1d2 = xtmp - i3;
  for (xtmp = 0; xtmp < nm1d2; xtmp++) {
    fp->data[fp->size[0] * (xtmp + b_apnd)] = 1.0 - pf->data[i3 + xtmp];
  }

  emxFree_real_T(&pf);

  /*  lowest fft bin_1 */
  /*  highest fft bin_1 */
  if (b1 < 0.0) {
    emxInit_real_T(&b_c, 2);
    i3 = b_c->size[0] * b_c->size[1];
    b_c->size[0] = 1;
    b_c->size[1] = c->size[1];
    emxEnsureCapacity((emxArray__common *)b_c, i3, (int)sizeof(double));
    b_apnd = c->size[0] * c->size[1];
    for (i3 = 0; i3 < b_apnd; i3++) {
      b_c->data[i3] = (c->data[i3] + b1) - 1.0;
    }

    b_abs(b_c, c);
    i3 = c->size[0] * c->size[1];
    c->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)c, i3, (int)sizeof(double));
    nm1d2 = c->size[0];
    xtmp = c->size[1];
    b_apnd = nm1d2 * xtmp;
    emxFree_real_T(&b_c);
    for (i3 = 0; i3 < b_apnd; i3++) {
      c->data[i3] = (c->data[i3] - b1) + 1.0;
    }

    /*  convert negative frequencies into positive */
  }

  /*  end */
  /*  double all except the DC and Nyquist (if any) terms */
  i3 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  msk->size[1] = c->size[1];
  emxEnsureCapacity((emxArray__common *)msk, i3, (int)sizeof(boolean_T));
  b_apnd = c->size[0] * c->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    msk->data[i3] = ((c->data[i3] + (b1 + 1.0) > 2.0) && (c->data[i3] + (b1 +
      1.0) < 258.0));
  }

  emxInit_int32_T(&r0, 2);
  emxInit_int32_T(&r1, 2);

  /*  there is no Nyquist term if n is odd */
  eml_li_find(msk, r0);
  eml_li_find(msk, r1);
  i3 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = r1->size[1];
  emxEnsureCapacity((emxArray__common *)y, i3, (int)sizeof(double));
  b_apnd = r1->size[0] * r1->size[1];
  emxFree_boolean_T(&msk);
  for (i3 = 0; i3 < b_apnd; i3++) {
    y->data[i3] = fp->data[r1->data[i3] - 1];
  }

  emxFree_int32_T(&r1);
  b_apnd = y->size[0] * y->size[1];
  for (i3 = 0; i3 < b_apnd; i3++) {
    fp->data[r0->data[i3] - 1] = 2.0 * y->data[i3];
  }

  emxFree_real_T(&y);
  emxFree_int32_T(&r0);

  /*  */
  /*  sort out the output argument options */
  /*  */
  nm1d2 = 1;
  b_x = r->data[0];
  if (r->size[1] > 1) {
    if (rtIsNaN(r->data[0])) {
      xtmp = 2;
      exitg2 = false;
      while ((!exitg2) && (xtmp <= r->size[1])) {
        nm1d2 = xtmp;
        if (!rtIsNaN(r->data[xtmp - 1])) {
          b_x = r->data[xtmp - 1];
          exitg2 = true;
        } else {
          xtmp++;
        }
      }
    }

    if (nm1d2 < r->size[1]) {
      while (nm1d2 + 1 <= r->size[1]) {
        if (r->data[nm1d2] > b_x) {
          b_x = r->data[nm1d2];
        }

        nm1d2++;
      }
    }
  }

  nm1d2 = 1;
  ndbl = c->data[0];
  if (c->size[1] > 1) {
    if (rtIsNaN(c->data[0])) {
      xtmp = 2;
      exitg1 = false;
      while ((!exitg1) && (xtmp <= c->size[1])) {
        nm1d2 = xtmp;
        if (!rtIsNaN(c->data[xtmp - 1])) {
          ndbl = c->data[xtmp - 1];
          exitg1 = true;
        } else {
          xtmp++;
        }
      }
    }

    if (nm1d2 < c->size[1]) {
      while (nm1d2 + 1 <= c->size[1]) {
        if (c->data[nm1d2] > ndbl) {
          ndbl = c->data[nm1d2];
        }

        nm1d2++;
      }
    }
  }

  i3 = x->size[0] * x->size[1];
  x->size[0] = (int)b_x;
  x->size[1] = (int)ndbl;
  emxEnsureCapacity((emxArray__common *)x, i3, (int)sizeof(double));
  b_apnd = (int)b_x * (int)ndbl;
  for (i3 = 0; i3 < b_apnd; i3++) {
    x->data[i3] = 0.0;
  }

  i3 = r->size[1];
  for (nm1d2 = 0; nm1d2 < i3; nm1d2++) {
    x->data[((int)r->data[nm1d2] + x->size[0] * ((int)c->data[nm1d2] - 1)) - 1] =
      fp->data[nm1d2];
  }

  emxFree_real_T(&c);
  emxFree_real_T(&r);
  emxFree_real_T(&fp);

  /* Was x=sparse(r,c,v) */
  /*  if exactly three output arguments, then */
  i3 = mc->size[0] * mc->size[1];
  mc->size[0] = 1;
  mc->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)mc, i3, (int)sizeof(double));
  mc->data[0] = b1 + 1.0;

  /*  delete mc output for legacy code compatibility */
  *mn = b4 + 1.0;

  /*  */
  /*  plot results if no output arguments or g option given */
  /*  */
}

/*
 * File trailer for melbankm.c
 *
 * [EOF]
 */
