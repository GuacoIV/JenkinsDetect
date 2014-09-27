/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "abs.h"
#include "JenkinsCompare_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo s_emlrtRTEI = { 16, 5, "abs",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    uv1[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  int16_T iv26[2];
  int32_T i9;
  int32_T k;
  for (i9 = 0; i9 < 2; i9++) {
    iv26[i9] = (int16_T)x->size[i9];
  }

  i9 = y->size[0] * y->size[1];
  y->size[0] = iv26[0];
  y->size[1] = iv26[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i9, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i9 = x->size[0] * x->size[1];
  for (k = 0; k < i9; k++) {
    y->data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

/* End of code generation (abs.c) */
