/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo hb_emlrtRTEI = { 20, 5, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &hb_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  static char_T cv0[3][1] = { { 'l' }, { 'o' }, { 'g' } };

  emlrtErrorWithMessageIdR2012b(sp, &hb_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 3, cv0);
}

/* End of code generation (eml_error.c) */
