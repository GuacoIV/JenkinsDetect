/*
 * _coder_JenkinsCompare_mex.c
 *
 * Code generation for function 'JenkinsCompare'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_JenkinsCompare_api.h"
#include "JenkinsCompare_initialize.h"
#include "JenkinsCompare_terminate.h"

/* Function Declarations */
static void JenkinsCompare_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "JenkinsCompare", NULL, false, {585839548U,4280471661U,1452683995U,3644522327U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void JenkinsCompare_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[1];
  const mxArray *inputs[2];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  JenkinsCompareStackData* JenkinsCompareStackDataLocal = (JenkinsCompareStackData*)mxCalloc(1,sizeof(JenkinsCompareStackData));
  /* Module initialization. */
  JenkinsCompare_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 14, "JenkinsCompare");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 14, "JenkinsCompare");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  JenkinsCompare_api(JenkinsCompareStackDataLocal, inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  JenkinsCompare_terminate();
  mxFree(JenkinsCompareStackDataLocal);
}

void JenkinsCompare_atexit_wrapper(void)
{
   JenkinsCompare_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(JenkinsCompare_atexit_wrapper);
  /* Dispatch the entry-point. */
  JenkinsCompare_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_JenkinsCompare_mex.c) */
