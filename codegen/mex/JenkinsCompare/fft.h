/*
 * fft.h
 *
 * Code generation for function 'fft'
 *
 */

#ifndef __FFT_H__
#define __FFT_H__

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
extern void b_fft(const emlrtStack *sp, const emxArray_creal_T *x,
                  emxArray_creal_T *y);
extern void fft(const real_T x[156672], creal_T y[156672]);

#endif

/* End of code generation (fft.h) */
