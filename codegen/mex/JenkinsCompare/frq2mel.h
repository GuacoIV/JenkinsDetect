/*
 * frq2mel.h
 *
 * Code generation for function 'frq2mel'
 *
 */

#ifndef __FRQ2MEL_H__
#define __FRQ2MEL_H__

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
extern void b_frq2mel(const emlrtStack *sp, const emxArray_real_T *frq,
                      emxArray_real_T *mel);
extern void frq2mel(const real_T frq[2], real_T mel[2]);
extern void frq2mel_init(void);

#endif

/* End of code generation (frq2mel.h) */
