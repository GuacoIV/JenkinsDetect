/*
 * JenkinsCompare_mexutil.c
 *
 * Code generation for function 'JenkinsCompare_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "JenkinsCompare_mexutil.h"

/* Function Definitions */
const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m11;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 1, &pArray, "message", true,
    location);
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

/* End of code generation (JenkinsCompare_mexutil.c) */
