/*
 * _coder_JenkinsCompare_api.c
 *
 * Code generation for function '_coder_JenkinsCompare_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "_coder_JenkinsCompare_api.h"
#include "JenkinsCompare_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo gb_emlrtRTEI = { 1, 1, "_coder_JenkinsCompare_api", "" };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[78596];
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sampleRate,
  const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[78596];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[78596];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[78596]
{
  real_T (*y)[78596];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *sampleRate, const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(sampleRate), &thisId);
  emlrtDestroyArray(&sampleRate);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[78596]
{
  real_T (*ret)[78596];
  int32_T iv31[2];
  int32_T i16;
  for (i16 = 0; i16 < 2; i16++) {
    iv31[i16] = 39298 + -39296 * i16;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv31);
  ret = (real_T (*)[78596])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[78596]
{
  real_T (*y)[78596];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv30[2] = { 0, 0 };

  const mxArray *m9;
  y = NULL;
  m9 = emlrtCreateNumericArray(2, iv30, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m9, (void *)u->data);
  emlrtSetDimensions((mxArray *)m9, u->size, 2);
  emlrtAssign(&y, m9);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void JenkinsCompare_api(JenkinsCompareStackData *SD, const mxArray * const prhs
  [2], const mxArray *plhs[1])
{
  emxArray_real_T *y;
  real_T (*x)[78596];
  real_T sampleRate;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 2, &gb_emlrtRTEI, true);

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");
  sampleRate = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "sampleRate");

  /* Invoke the target function */
  JenkinsCompare(SD, &st, *x, sampleRate, y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(y);
  y->canFreeData = false;
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_JenkinsCompare_api.c) */
