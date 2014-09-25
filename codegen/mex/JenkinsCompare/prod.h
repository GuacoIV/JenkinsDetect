/*
 * prod.h
 *
 * Code generation for function 'prod'
 *
 */

#ifndef __PROD_H__
#define __PROD_H__

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
extern real_T prod(const emlrtStack *sp, const real_T x_data[], const int32_T
                   x_size[2]);

#ifdef __WATCOMC__

#pragma aux prod value [8087];

#endif
#endif

/* End of code generation (prod.h) */
