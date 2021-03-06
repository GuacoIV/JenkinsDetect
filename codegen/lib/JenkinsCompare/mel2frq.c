/*
 * File: mel2frq.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "mel2frq.h"

/* Function Definitions */

/*
 * MEL2FRQ  Convert Mel frequency scale to Hertz FRQ=(MEL)
 *  frq = mel2frq(mel) converts a vector of Mel frequencies
 *  to the corresponding real frequencies.
 *    mr gives the corresponding gradients in Hz/mel.
 *  The Mel scale corresponds to the perceived pitch of a tone
 * Arguments    : const double mel[4]
 *                double frq[4]
 * Return Type  : void
 */
void mel2frq(const double mel[4], double frq[4])
{
  int i2;
  double b_mel;

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
  /*          pages 466�469, 1976. doi: 10.1109/ICASSP.1976.1170013. */
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
  /*       Version: $Id: mel2frq.m 1874 2012-05-25 15:41:53Z dmb $ */
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
  for (i2 = 0; i2 < 4; i2++) {
    if (mel[i2] < 0.0) {
      b_mel = -1.0;
    } else if (mel[i2] > 0.0) {
      b_mel = 1.0;
    } else if (mel[i2] == 0.0) {
      b_mel = 0.0;
    } else {
      b_mel = mel[i2];
    }

    frq[i2] = 700.0 * b_mel * (exp(fabs(mel[i2]) / 1127.0104803341571) - 1.0);
  }
}

/*
 * File trailer for mel2frq.c
 *
 * [EOF]
 */
