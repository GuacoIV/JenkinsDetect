/*
 * prod.c
 *
 * Code generation for function 'prod'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "prod.h"
#include "melcepst.h"
#include "JenkinsCompare_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo f_emlrtMCI = { 18, 9, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtMCInfo g_emlrtMCI = { 17, 19, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtMCInfo h_emlrtMCI = { 23, 9, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtMCInfo i_emlrtMCI = { 20, 19, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtRSInfo wc_emlrtRSI = { 20, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtRSInfo xc_emlrtRSI = { 17, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtRSInfo kd_emlrtRSI = { 23, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

static emlrtRSInfo ld_emlrtRSI = { 18, "prod",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m"
};

/* Function Definitions */
real_T prod(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T i;
  int32_T exitg1;
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 31 };

  const mxArray *m4;
  char_T cv13[31];
  static const char_T cv14[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'p', 'r', 'o', 'd', '_', 's', 'p', 'e', 'c', 'i',
    'a', 'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 36 };

  char_T cv15[36];
  static const char_T cv16[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  p = false;
  b_p = false;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (x_size[i] != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 31; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(sp, 31, m4, cv13);
    emlrtAssign(&b_y, m4);
    st.site = &xc_emlrtRSI;
    b_st.site = &ld_emlrtRSI;
    error(&st, b_message(&b_st, b_y, &f_emlrtMCI), &g_emlrtMCI);
  }

  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 36; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m4, cv15);
    emlrtAssign(&c_y, m4);
    st.site = &wc_emlrtRSI;
    b_st.site = &kd_emlrtRSI;
    error(&st, b_message(&b_st, c_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  if (x_size[1] == 0) {
    y = 1.0;
  } else {
    y = x_data[0];
    i = 2;
    while (i <= x_size[1]) {
      y *= x_data[1];
      i = 3;
    }
  }

  return y;
}

/* End of code generation (prod.c) */
