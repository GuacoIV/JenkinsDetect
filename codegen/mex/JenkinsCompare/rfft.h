/*
 * rfft.h
 *
 * Code generation for function 'rfft'
 *
 */

#ifndef __RFFT_H__
#define __RFFT_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "JenkinsCompare_types.h"

/* Function Declarations */
extern void rfft(JenkinsCompareStackData *SD, const emlrtStack *sp, const real_T
                 x[156672], emxArray_creal_T *y);

#endif

/* End of code generation (rfft.h) */
