/*
 * File: frq2mel.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

#ifndef __FRQ2MEL_H__
#define __FRQ2MEL_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "JenkinsCompare_types.h"

/* Function Declarations */
extern void b_frq2mel(const emxArray_real_T *frq, emxArray_real_T *mel);
extern void frq2mel(const double frq[2], double mel[2]);

#endif

/*
 * File trailer for frq2mel.h
 *
 * [EOF]
 */
