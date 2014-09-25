/*
 * mel2frq.h
 *
 * Code generation for function 'mel2frq'
 *
 */

#ifndef __MEL2FRQ_H__
#define __MEL2FRQ_H__

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
extern void mel2frq(const real_T mel[4], real_T frq[4]);
extern void mel2frq_init(void);

#endif

/* End of code generation (mel2frq.h) */
