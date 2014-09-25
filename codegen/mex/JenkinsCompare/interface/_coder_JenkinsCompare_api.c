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

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u[9792]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[78596];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[78596];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sampleRate,
  const char_T *identifier);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[78596];
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const real_T u[9792])
{
  const mxArray *y;
  static const int32_T iv19[2] = { 0, 0 };

  const mxArray *m10;
  static const int32_T iv20[2] = { 306, 32 };

  y = NULL;
  m10 = emlrtCreateNumericArray(2, iv19, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m10, (void *)u);
  emlrtSetDimensions((mxArray *)m10, iv20, 2);
  emlrtAssign(&y, m10);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[78596]
{
  real_T (*y)[78596];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[78596]
{
  real_T (*y)[78596];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *sampleRate,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(sampleRate), &thisId);
  emlrtDestroyArray(&sampleRate);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[78596]
{
  real_T (*ret)[78596];
  int32_T iv22[2];
  int32_T i10;
  for (i10 = 0; i10 < 2; i10++) {
    iv22[i10] = 39298 + -39296 * i10;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv22);
  ret = (real_T (*)[78596])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
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
  real_T (*y)[9792];
  real_T (*x)[78596];
  real_T sampleRate;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  y = (real_T (*)[9792])mxMalloc(sizeof(real_T [9792]));

  /* Marshall function inputs */
  x = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");
  sampleRate = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "sampleRate");

  /* Invoke the target function */
  JenkinsCompare(SD, &st, *x, sampleRate, *y);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*y);
}

/* End of code generation (_coder_JenkinsCompare_api.c) */
