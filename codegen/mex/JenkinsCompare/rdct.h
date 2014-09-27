/*
 * rdct.h
 *
 * Code generation for function 'rdct'
 *
 */

#ifndef __RDCT_H__
#define __RDCT_H__

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
extern void rdct(const emlrtStack *sp, const emxArray_creal_T *x,
                 emxArray_real_T *y);

#endif

/* End of code generation (rdct.h) */
