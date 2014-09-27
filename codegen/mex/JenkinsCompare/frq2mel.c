/*
 * frq2mel.c
 *
 * Code generation for function 'frq2mel'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "frq2mel.h"
#include "abs.h"
#include "JenkinsCompare_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 1, 21, "frq2mel",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\frq2mel.m"
};

static emlrtECInfo f_emlrtECI = { 2, 59, 7, "frq2mel",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\frq2mel.m"
};

/* Function Definitions */
void b_frq2mel(const emlrtStack *sp, const emxArray_real_T *frq, emxArray_real_T
               *mel)
{
  int32_T k;
  int32_T loop_ub;
  emxArray_real_T *x;
  emxArray_real_T *r5;
  int32_T b_mel[2];
  int32_T iv25[2];
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* FRQ2ERB  Convert Hertz to Mel frequency scale MEL=(FRQ) */
  /* 	[mel,mr] = frq2mel(frq) converts a vector of frequencies (in Hz) */
  /* 	to the corresponding values on the Mel scale which corresponds */
  /* 	to the perceived pitch of a tone. */
  /*    mr gives the corresponding gradients in Hz/mel. */
  /* 	The relationship between mel and frq is given by [1]: */
  /*  */
  /* 	m = ln(1 + f/700) * 1000 / ln(1+1000/700) */
  /*  */
  /*   	This means that m(1000) = 1000 */
  /*  */
  /* 	References: */
  /*  */
  /*      [1] J. Makhoul and L. Cosell. "Lpcw: An lpc vocoder with */
  /*          linear predictive spectral warping", In Proc IEEE Intl */
  /*          Conf Acoustics, Speech and Signal Processing, volume 1, */
  /*          pages 466–469, 1976. doi: 10.1109/ICASSP.1976.1170013. */
  /* 	  [2] S. S. Stevens & J. Volkman "The relation of pitch to */
  /* 		  frequency", American J of Psychology, V 53, p329 1940 */
  /* 	  [3] C. G. M. Fant, "Acoustic description & classification */
  /* 		  of phonetic units", Ericsson Tchnics, No 1 1959 */
  /* 		  (reprinted in "Speech Sounds & Features", MIT Press 1973) */
  /* 	  [4] S. B. Davis & P. Mermelstein, "Comparison of parametric */
  /* 		  representations for monosyllabic word recognition in */
  /* 		  continuously spoken sentences", IEEE ASSP, V 28, */
  /* 		  pp 357-366 Aug 1980 */
  /* 	  [5] J. R. Deller Jr, J. G. Proakis, J. H. L. Hansen, */
  /* 		  "Discrete-Time Processing of Speech Signals", p380, */
  /* 		  Macmillan 1993 */
  /*       Copyright (C) Mike Brookes 1998 */
  /*       Version: $Id: frq2mel.m 1874 2012-05-25 15:41:53Z dmb $ */
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
  k = mel->size[0] * mel->size[1];
  mel->size[0] = 1;
  mel->size[1] = frq->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)mel, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = frq->size[0] * frq->size[1];
  for (k = 0; k < loop_ub; k++) {
    mel->data[k] = frq->data[k];
  }

  for (k = 0; k < frq->size[1]; k++) {
    mel->data[k] = muDoubleScalarSign(mel->data[k]);
  }

  emxInit_real_T(sp, &x, 2, &r_emlrtRTEI, true);
  b_abs(sp, frq, x);
  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  k = x->size[0];
  loop_ub = x->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    x->data[k] = 1.0 + x->data[k] / 700.0;
  }

  emxInit_real_T(sp, &r5, 2, &r_emlrtRTEI, true);
  k = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r5, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (k = 0; k < loop_ub; k++) {
    r5->data[k] = x->data[k];
  }

  for (k = 0; k < x->size[1]; k++) {
    r5->data[k] = muDoubleScalarLog(r5->data[k]);
  }

  emxFree_real_T(&x);
  for (k = 0; k < 2; k++) {
    b_mel[k] = mel->size[k];
  }

  for (k = 0; k < 2; k++) {
    iv25[k] = r5->size[k];
  }

  emlrtSizeEqCheck2DFastR2012b(b_mel, iv25, &f_emlrtECI, sp);
  k = mel->size[0] * mel->size[1];
  mel->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)mel, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  k = mel->size[0];
  loop_ub = mel->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    mel->data[k] = mel->data[k] * r5->data[k] * 1127.0104803341571;
  }

  emxFree_real_T(&r5);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void frq2mel(const real_T frq[2], real_T mel[2])
{
  int32_T k;

  /* FRQ2ERB  Convert Hertz to Mel frequency scale MEL=(FRQ) */
  /* 	[mel,mr] = frq2mel(frq) converts a vector of frequencies (in Hz) */
  /* 	to the corresponding values on the Mel scale which corresponds */
  /* 	to the perceived pitch of a tone. */
  /*    mr gives the corresponding gradients in Hz/mel. */
  /* 	The relationship between mel and frq is given by [1]: */
  /*  */
  /* 	m = ln(1 + f/700) * 1000 / ln(1+1000/700) */
  /*  */
  /*   	This means that m(1000) = 1000 */
  /*  */
  /* 	References: */
  /*  */
  /*      [1] J. Makhoul and L. Cosell. "Lpcw: An lpc vocoder with */
  /*          linear predictive spectral warping", In Proc IEEE Intl */
  /*          Conf Acoustics, Speech and Signal Processing, volume 1, */
  /*          pages 466–469, 1976. doi: 10.1109/ICASSP.1976.1170013. */
  /* 	  [2] S. S. Stevens & J. Volkman "The relation of pitch to */
  /* 		  frequency", American J of Psychology, V 53, p329 1940 */
  /* 	  [3] C. G. M. Fant, "Acoustic description & classification */
  /* 		  of phonetic units", Ericsson Tchnics, No 1 1959 */
  /* 		  (reprinted in "Speech Sounds & Features", MIT Press 1973) */
  /* 	  [4] S. B. Davis & P. Mermelstein, "Comparison of parametric */
  /* 		  representations for monosyllabic word recognition in */
  /* 		  continuously spoken sentences", IEEE ASSP, V 28, */
  /* 		  pp 357-366 Aug 1980 */
  /* 	  [5] J. R. Deller Jr, J. G. Proakis, J. H. L. Hansen, */
  /* 		  "Discrete-Time Processing of Speech Signals", p380, */
  /* 		  Macmillan 1993 */
  /*       Copyright (C) Mike Brookes 1998 */
  /*       Version: $Id: frq2mel.m 1874 2012-05-25 15:41:53Z dmb $ */
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
  for (k = 0; k < 2; k++) {
    mel[k] = muDoubleScalarSign(frq[k]) * muDoubleScalarLog(1.0 +
      muDoubleScalarAbs(frq[k]) / 700.0) * 1127.0104803341571;
  }
}

void frq2mel_init(void)
{
}

/* End of code generation (frq2mel.c) */
