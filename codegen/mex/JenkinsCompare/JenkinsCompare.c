/*
 * JenkinsCompare.c
 *
 * Code generation for function 'JenkinsCompare'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "eml_error.h"
#include "melcepst.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3, "JenkinsCompare",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\JenkinsCompare.m"
};

static emlrtRSInfo b_emlrtRSI = { 14, "log",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" };

/* Function Definitions */
void JenkinsCompare(JenkinsCompareStackData *SD, const emlrtStack *sp, const
                    real_T x[78596], real_T sampleRate, emxArray_real_T *y)
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (sampleRate < 0.0) {
    b_st.site = &b_emlrtRSI;
    eml_error(&b_st);
  }

  st.site = &emlrtRSI;
  melcepst(SD, &st, x, sampleRate, muDoubleScalarFloor(3.0 * muDoubleScalarLog
            (sampleRate)), y);
}

/* End of code generation (JenkinsCompare.c) */
