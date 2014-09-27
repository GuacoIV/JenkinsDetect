/*
 * File: frq2mel.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "frq2mel.h"
#include "JenkinsCompare_emxutil.h"
#include "abs.h"

/* Function Definitions */

/*
 * FRQ2ERB  Convert Hertz to Mel frequency scale MEL=(FRQ)
 *  [mel,mr] = frq2mel(frq) converts a vector of frequencies (in Hz)
 *  to the corresponding values on the Mel scale which corresponds
 *  to the perceived pitch of a tone.
 *    mr gives the corresponding gradients in Hz/mel.
 * Arguments    : const emxArray_real_T *frq
 *                emxArray_real_T *mel
 * Return Type  : void
 */
void b_frq2mel(const emxArray_real_T *frq, emxArray_real_T *mel)
{
  emxArray_real_T *af;
  int k;
  int loop_ub;
  double x;
  emxArray_real_T *r2;
  emxInit_real_T(&af, 2);

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
  b_abs(frq, af);
  k = mel->size[0] * mel->size[1];
  mel->size[0] = 1;
  mel->size[1] = frq->size[1];
  emxEnsureCapacity((emxArray__common *)mel, k, (int)sizeof(double));
  loop_ub = frq->size[0] * frq->size[1];
  for (k = 0; k < loop_ub; k++) {
    mel->data[k] = frq->data[k];
  }

  for (k = 0; k < frq->size[1]; k++) {
    if (mel->data[k] < 0.0) {
      x = -1.0;
    } else if (mel->data[k] > 0.0) {
      x = 1.0;
    } else if (mel->data[k] == 0.0) {
      x = 0.0;
    } else {
      x = mel->data[k];
    }

    mel->data[k] = x;
  }

  k = af->size[0] * af->size[1];
  af->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)af, k, (int)sizeof(double));
  k = af->size[0];
  loop_ub = af->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    af->data[k] = 1.0 + af->data[k] / 700.0;
  }

  emxInit_real_T(&r2, 2);
  k = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = af->size[1];
  emxEnsureCapacity((emxArray__common *)r2, k, (int)sizeof(double));
  loop_ub = af->size[0] * af->size[1];
  for (k = 0; k < loop_ub; k++) {
    r2->data[k] = af->data[k];
  }

  for (k = 0; k < af->size[1]; k++) {
    r2->data[k] = log(r2->data[k]);
  }

  emxFree_real_T(&af);
  k = mel->size[0] * mel->size[1];
  mel->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)mel, k, (int)sizeof(double));
  k = mel->size[0];
  loop_ub = mel->size[1];
  loop_ub *= k;
  for (k = 0; k < loop_ub; k++) {
    mel->data[k] = mel->data[k] * r2->data[k] * 1127.0104803341571;
  }

  emxFree_real_T(&r2);
}

/*
 * FRQ2ERB  Convert Hertz to Mel frequency scale MEL=(FRQ)
 *  [mel,mr] = frq2mel(frq) converts a vector of frequencies (in Hz)
 *  to the corresponding values on the Mel scale which corresponds
 *  to the perceived pitch of a tone.
 *    mr gives the corresponding gradients in Hz/mel.
 * Arguments    : const double frq[2]
 *                double mel[2]
 * Return Type  : void
 */
void frq2mel(const double frq[2], double mel[2])
{
  int k;
  double b_frq;

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
    if (frq[k] < 0.0) {
      b_frq = -1.0;
    } else if (frq[k] > 0.0) {
      b_frq = 1.0;
    } else if (frq[k] == 0.0) {
      b_frq = 0.0;
    } else {
      b_frq = frq[k];
    }

    mel[k] = b_frq * log(1.0 + fabs(frq[k]) / 700.0) * 1127.0104803341571;
  }
}

/*
 * File trailer for frq2mel.c
 *
 * [EOF]
 */
