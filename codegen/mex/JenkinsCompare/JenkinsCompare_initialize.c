/*
 * JenkinsCompare_initialize.c
 *
 * Code generation for function 'JenkinsCompare_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "JenkinsCompare_initialize.h"
#include "frq2mel.h"
#include "mel2frq.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;

/* Function Declarations */
static void JenkinsCompare_once(void);

/* Function Definitions */
static void JenkinsCompare_once(void)
{
  frq2mel_init();
  mel2frq_init();
}

void JenkinsCompare_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    JenkinsCompare_once();
  }
}

/* End of code generation (JenkinsCompare_initialize.c) */
