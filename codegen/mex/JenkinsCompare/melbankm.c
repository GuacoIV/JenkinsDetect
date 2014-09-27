/*
 * melbankm.c
 *
 * Code generation for function 'melbankm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "melbankm.h"
#include "frq2mel.h"
#include "mel2frq.h"
#include "norm.h"
#include "abs.h"
#include "JenkinsCompare_emxutil.h"
#include "melcepst.h"
#include "eml_int_forloop_overflow_check.h"
#include "floor.h"
#include "JenkinsCompare_mexutil.h"
#include "JenkinsCompare_data.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 139, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo qb_emlrtRSI = { 173, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo rb_emlrtRSI = { 175, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo sb_emlrtRSI = { 191, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo tb_emlrtRSI = { 197, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo ub_emlrtRSI = { 201, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo vb_emlrtRSI = { 206, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo wb_emlrtRSI = { 207, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo xb_emlrtRSI = { 222, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo yb_emlrtRSI = { 223, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo ac_emlrtRSI = { 224, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo bc_emlrtRSI = { 239, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo cc_emlrtRSI = { 245, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo dc_emlrtRSI = { 246, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo gc_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo hc_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo ic_emlrtRSI = { 10, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo jc_emlrtRSI = { 11, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo kc_emlrtRSI = { 117, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo lc_emlrtRSI = { 41, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo mc_emlrtRSI = { 230, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo nc_emlrtRSI = { 272, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo oc_emlrtRSI = { 284, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo pc_emlrtRSI = { 31, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo qc_emlrtRSI = { 11, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo rc_emlrtRSI = { 26, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo sc_emlrtRSI = { 39, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtMCInfo r_emlrtMCI = { 405, 5, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo s_emlrtMCI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo t_emlrtMCI = { 57, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo u_emlrtMCI = { 56, 19, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo v_emlrtMCI = { 125, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo w_emlrtMCI = { 65, 1, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo x_emlrtMCI = { 239, 9, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo y_emlrtMCI = { 261, 9, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo ab_emlrtMCI = { 14, 5, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 23, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 183, 9, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 204, 1, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 218, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 219, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 238, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtECInfo c_emlrtECI = { -1, 239, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtECInfo d_emlrtECI = { 2, 238, 9, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 224, 25, "pm", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 224, 25, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 224, 8, "pm", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 224, 8, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 222, 25, "fp", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 222, 25, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 222, 10, "fp", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 222, 10, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtECInfo e_emlrtECI = { 2, 205, 4, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 196, 4, "pf", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 247, 15, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtDCInfo l_emlrtDCI = { 247, 15, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  4 };

static emlrtDCInfo m_emlrtDCI = { 247, 21, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtDCInfo n_emlrtDCI = { 247, 21, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  4 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 200, 4, "pf", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 239, 14, "v", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 239, 5, "v", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 250, 11, "x", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 250, 11, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 250, 11, "r", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 250, 21, "x", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 250, 21, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 250, 21, "c", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 250, 33, "v", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 17, 37, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtRSInfo od_emlrtRSI = { 125, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo pd_emlrtRSI = { 56, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo sd_emlrtRSI = { 14, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo vd_emlrtRSI = { 404, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo wd_emlrtRSI = { 261, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo xd_emlrtRSI = { 65, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo yd_emlrtRSI = { 239, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo ne_emlrtRSI = { 57, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo se_emlrtRSI = { 405, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

/* Function Declarations */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx);
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x);

/* Function Definitions */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 31 };

  const mxArray *m14;
  char_T cv43[31];
  int32_T i;
  static const char_T cv44[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T k;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ic_emlrtRSI;
  overflow = true;
  if ((idx < 1.0) || ((int32_T)idx > x->size[1]) || (idx != muDoubleScalarFloor
       (idx))) {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv33);
    for (i = 0; i < 31; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m14, cv43);
    emlrtAssign(&y, m14);
    b_st.site = &pd_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    error(&b_st, b_message(&c_st, y, &t_emlrtMCI), &u_emlrtMCI);
  }

  st.site = &jc_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &kc_emlrtRSI;
  if ((int32_T)idx > x->size[1] - 1) {
    overflow = false;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = (int32_T)idx; k <= i; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m14 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m14);
    b_st.site = &od_emlrtRSI;
    error(&b_st, b_y, &v_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &t_emlrtRTEI, true);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    x->data[x->size[0] * k] = b_x->data[b_x->size[0] * k];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m7;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &sc_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    b_y = NULL;
    m7 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m7);
    st.site = &sd_emlrtRSI;
    error(&st, b_y, &ab_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &q_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  j = 0;
  st.site = &rc_emlrtRSI;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 31 };

  const mxArray *m13;
  char_T cv41[31];
  int32_T i;
  static const char_T cv42[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T k;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ic_emlrtRSI;
  overflow = true;
  if (1 > x->size[1]) {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m13 = emlrtCreateCharArray(2, iv32);
    for (i = 0; i < 31; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m13, cv41);
    emlrtAssign(&y, m13);
    b_st.site = &pd_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    error(&b_st, b_message(&c_st, y, &t_emlrtMCI), &u_emlrtMCI);
  }

  st.site = &jc_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &kc_emlrtRSI;
  if (1 > x->size[1] - 1) {
    overflow = false;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= i; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m13 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m13);
    b_st.site = &od_emlrtRSI;
    error(&b_st, b_y, &v_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &t_emlrtRTEI, true);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    x->data[x->size[0] * k] = b_x->data[b_x->size[0] * k];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void melbankm(const emlrtStack *sp, real_T p, real_T fs, emxArray_real_T *x,
              emxArray_real_T *mc, real_T *mn)
{
  real_T dv5[2];
  int32_T i6;
  real_T mflh[2];
  real_T melrng;
  int32_T k;
  real_T blim[4];
  real_T b_mflh[4];
  int32_T cdiff;
  boolean_T overflow;
  real_T ndbl;
  real_T b_cdiff;
  const mxArray *y;
  static const int32_T iv18[2] = { 1, 21 };

  const mxArray *m6;
  char_T cv31[21];
  int32_T i;
  static const char_T cv32[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  real_T b_x;
  real_T b1;
  real_T b4;
  real_T anew;
  real_T apnd;
  real_T absa;
  real_T absb;
  const mxArray *b_y;
  static const int32_T iv19[2] = { 1, 21 };

  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *pf;
  int32_T i7;
  emxArray_real_T *fp;
  int32_T b_pf[2];
  int32_T b_fp[2];
  emxArray_boolean_T *c_x;
  const mxArray *e_y;
  int32_T ii_data[1];
  boolean_T exitg4;
  const mxArray *f_y;
  int32_T b_ii_data[1];
  int32_T k2_size[2];
  real_T k2_data[1];
  const mxArray *g_y;
  boolean_T exitg3;
  const mxArray *h_y;
  int32_T k3_size[2];
  real_T k3_data[1];
  int32_T i8;
  emxArray_real_T *r;
  int32_T b_apnd;
  uint32_T b_absa;
  uint32_T u0;
  const mxArray *i_y;
  static const int32_T iv20[2] = { 1, 21 };

  emxArray_real_T *j_y;
  emxArray_real_T *c;
  emxArray_real_T *b_c;
  emxArray_boolean_T *msk;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  const mxArray *k_y;
  static const int32_T iv21[2] = { 1, 36 };

  char_T cv33[36];
  static const char_T cv34[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *l_y;
  static const int32_T iv22[2] = { 1, 39 };

  char_T cv35[39];
  static const char_T cv36[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg2;
  const mxArray *m_y;
  static const int32_T iv23[2] = { 1, 36 };

  const mxArray *n_y;
  static const int32_T iv24[2] = { 1, 39 };

  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &e_st;
  g_st.tls = e_st.tls;
  h_st.prev = &e_st;
  h_st.tls = e_st.tls;
  i_st.prev = &c_st;
  i_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* MELBANKM determine matrix for a mel/erb/bark-spaced filterbank [X,MN,MX]=(P,N,FS,FL,FH,W) */
  /*  */
  /*  Inputs: */
  /*        p   number of filters in filterbank or the filter spacing in k-mel/bark/erb [ceil(4.6*log10(fs))] */
  /* 		n   length of fft */
  /* 		fs  sample rate in Hz */
  /* 		fl  low end of the lowest filter as a fraction of fs [default = 0] */
  /* 		fh  high end of highest filter as a fraction of fs [default = 0.5] */
  /* 		w   any sensible combination of the following: */
  /*              'b' = bark scale instead of mel */
  /*              'e' = erb-rate scale */
  /*              'l' = log10 Hz frequency scale */
  /*              'f' = linear frequency scale */
  /*  */
  /*              'c' = fl/fh specify centre of low and high filters */
  /*              'h' = fl/fh are in Hz instead of fractions of fs */
  /*              'H' = fl/fh are in mel/erb/bark/log10 */
  /*  */
  /* 		      't' = triangular shaped filters in mel/erb/bark domain (default) */
  /* 		      'n' = hanning shaped filters in mel/erb/bark domain */
  /* 		      'm' = hamming shaped filters in mel/erb/bark domain */
  /*  */
  /* 		      'z' = highest and lowest filters taper down to zero [default] */
  /* 		      'y' = lowest filter remains at 1 down to 0 frequency and */
  /* 			        highest filter remains at 1 up to nyquist freqency */
  /*  */
  /*              'u' = scale filters to sum to unity */
  /*  */
  /*              's' = single-sided: do not double filters to account for negative frequencies */
  /*  */
  /*              'g' = plot idealized filters [default if no output arguments present] */
  /*  */
  /*  Note that the filter shape (triangular, hamming etc) is defined in the mel (or erb etc) domain. */
  /*  Some people instead define an asymmetric triangular filter in the frequency domain. */
  /*  */
  /* 		       If 'ty' or 'ny' is specified, the total power in the fft is preserved. */
  /*  */
  /*  Outputs:	x     a sparse matrix containing the filterbank amplitudes */
  /* 		          If the mn and mx outputs are given then size(x)=[p,mx-mn+1] */
  /*                  otherwise size(x)=[p,1+floor(n/2)] */
  /*                  Note that the peak filter values equal 2 to account for the power */
  /*                  in the negative FFT frequencies. */
  /*            mc    the filterbank centre frequencies in mel/erb/bark */
  /* 		    mn    the lowest fft bin with a non-zero coefficient */
  /* 		    mx    the highest fft bin with a non-zero coefficient */
  /*                  Note: you must specify both or neither of mn and mx. */
  /*  */
  /*  Examples of use: */
  /*  */
  /*  (a) Calcuate the Mel-frequency Cepstral Coefficients */
  /*  */
  /*        f=rfft(s);			        % rfft() returns only 1+floor(n/2) coefficients */
  /* 		x=melbankm(p,n,fs);	        % n is the fft length, p is the number of filters wanted */
  /* 		z=log(x*abs(f).^2);         % multiply x by the power spectrum */
  /* 		c=dct(z);                   % take the DCT */
  /*  */
  /*  (b) Calcuate the Mel-frequency Cepstral Coefficients efficiently */
  /*  */
  /*        f=fft(s);                        % n is the fft length, p is the number of filters wanted */
  /*        [x,mc,na,nb]=melbankm(p,n,fs);   % na:nb gives the fft bins that are needed */
  /*        z=log(x*(f(na:nb)).*conj(f(na:nb))); */
  /*  */
  /*  (c) Plot the calculated filterbanks */
  /*  */
  /*       plot((0:floor(n/2))*fs/n,melbankm(p,n,fs)')   % fs=sample frequency */
  /*  */
  /*  (d) Plot the idealized filterbanks (without output sampling) */
  /*  */
  /*       melbankm(p,n,fs); */
  /*  */
  /*  References: */
  /*  */
  /*  [1] S. S. Stevens, J. Volkman, and E. B. Newman. A scale for the measurement */
  /*      of the psychological magnitude of pitch. J. Acoust Soc Amer, 8: 185–19, 1937. */
  /*  [2] S. Davis and P. Mermelstein. Comparison of parametric representations for */
  /*      monosyllabic word recognition in continuously spoken sentences. */
  /*      IEEE Trans Acoustics Speech and Signal Processing, 28 (4): 357–366, Aug. 1980. */
  /*       Copyright (C) Mike Brookes 1997-2009 */
  /*       Version: $Id: melbankm.m 713 2011-10-16 14:45:43Z dmb $ */
  /*  */
  /*    VOICEBOX is a MATLAB toolbox for speech processing. */
  /*    Home page: http://www.ee.ic.ac.uk/hp/staff/dmb/voicebox/voicebox.html */
  /*  */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*    This program is free software; you can redistribute it and/or modify */
  /*    it under the terms of the GNU General Public License as published by */
  /*    the Free Software Foundation; either version 2 of the License, or */
  /*    (at your option) any later version. */
  /*  */
  /*    This program is distributed in the hope that it will be useful, */
  /*    but WITHOUT ANY WARRANTY; without even the implied warranty of */
  /*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the */
  /*    GNU General Public License for more details. */
  /*  */
  /*    You can obtain a copy of the GNU General Public License from */
  /*    http://www.gnu.org/copyleft/gpl.html or by writing to */
  /*    Free Software Foundation, Inc.,675 Mass Ave, Cambridge, MA 02139, USA. */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Note "FFT bin_0" assumes DC = bin 0 whereas "FFT bin_1" means DC = bin 1 */
  /*  1 if single sided else 2 */
  /*  default warping is mel */
  for (i6 = 0; i6 < 2; i6++) {
    dv5[i6] = 0.5 * (real_T)i6 * fs;
  }

  st.site = &pb_emlrtRSI;
  frq2mel(dv5, mflh);

  /*  convert frequency limits into mel */
  melrng = 0.0;
  for (k = 0; k < 2; k++) {
    melrng += mflh[k] * (-1.0 + 2.0 * (((real_T)k + 1.0) - 1.0));
  }

  /*  mel range */
  /*  bin index of highest positive frequency (Nyquist if n is even) */
  if (p < 1.0) {
    p = muDoubleScalarRound(melrng / (p * 1000.0)) - 1.0;
  }

  melrng /= p + 1.0;

  /*  */
  /*  Calculate the FFT bins corresponding to [filter#1-low filter#1-mid filter#p-mid filter#p-high] */
  /*  */
  blim[0] = 0.0;
  blim[1] = 1.0;
  blim[2] = p;
  blim[3] = p + 1.0;
  for (i6 = 0; i6 < 4; i6++) {
    b_mflh[i6] = mflh[0] + blim[i6] * melrng;
  }

  st.site = &qb_emlrtRSI;
  mel2frq(b_mflh, blim);
  for (i6 = 0; i6 < 4; i6++) {
    blim[i6] = blim[i6] * 512.0 / fs;
  }

  st.site = &rb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  if (muDoubleScalarIsNaN(p)) {
    cdiff = 1;
    overflow = false;
  } else if (p < 1.0) {
    cdiff = 0;
    overflow = false;
  } else if (muDoubleScalarIsInf(p)) {
    cdiff = 1;
    overflow = !(1.0 == p);
  } else {
    ndbl = muDoubleScalarFloor((p - 1.0) + 0.5);
    b_cdiff = (1.0 + ndbl) - p;
    if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 * p) {
      ndbl++;
    } else if (b_cdiff > 0.0) {
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      cdiff = (int32_T)ndbl;
    } else {
      cdiff = 0;
    }
  }

  d_st.site = &gc_emlrtRSI;
  if (!overflow) {
  } else {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv18);
    for (i = 0; i < 21; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m6, cv31);
    emlrtAssign(&y, m6);
    e_st.site = &vd_emlrtRSI;
    f_st.site = &se_emlrtRSI;
    error(&e_st, b_message(&f_st, y, &r_emlrtMCI), &s_emlrtMCI);
  }

  if ((cdiff > 0) && (cdiff > 1)) {
    d_st.site = &hc_emlrtRSI;
  }

  /*  mel centre frequencies */
  b_x = muDoubleScalarFloor(blim[0]);
  b1 = muDoubleScalarFloor(blim[0]) + 1.0;

  /*  lowest FFT bin_0 required might be negative) */
  b4 = muDoubleScalarMin(256.0, muDoubleScalarCeil(blim[3]) - 1.0);

  /*  highest FFT bin_0 required */
  /*  */
  /*  now map all the useful FFT bins_0 to filter1 centres */
  /*  */
  st.site = &sb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  if (muDoubleScalarIsNaN(b1) || muDoubleScalarIsNaN(b4)) {
    cdiff = 0;
    anew = rtNaN;
    apnd = b4;
    overflow = false;
  } else if (b4 < b_x + 1.0) {
    cdiff = -1;
    anew = b_x + 1.0;
    apnd = b4;
    overflow = false;
  } else if (muDoubleScalarIsInf(b1) || muDoubleScalarIsInf(b4)) {
    cdiff = 0;
    anew = rtNaN;
    apnd = b4;
    overflow = !(b_x + 1.0 == b4);
  } else {
    anew = b_x + 1.0;
    ndbl = muDoubleScalarFloor((b4 - (b_x + 1.0)) + 0.5);
    apnd = (b_x + 1.0) + ndbl;
    b_cdiff = apnd - b4;
    absa = muDoubleScalarAbs(b_x + 1.0);
    absb = muDoubleScalarAbs(b4);
    if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = b4;
    } else if (b_cdiff > 0.0) {
      apnd = (b_x + 1.0) + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      cdiff = (int32_T)ndbl - 1;
    } else {
      cdiff = -1;
    }
  }

  d_st.site = &gc_emlrtRSI;
  if (!overflow) {
  } else {
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv19);
    for (i = 0; i < 21; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m6, cv31);
    emlrtAssign(&b_y, m6);
    e_st.site = &vd_emlrtRSI;
    f_st.site = &se_emlrtRSI;
    error(&e_st, b_message(&f_st, b_y, &r_emlrtMCI), &s_emlrtMCI);
  }

  emxInit_real_T(&d_st, &c_y, 2, &l_emlrtRTEI, true);
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (cdiff + 1 > 0) {
    c_y->data[0] = anew;
    if (cdiff + 1 > 1) {
      c_y->data[cdiff] = apnd;
      i6 = cdiff + (cdiff < 0);
      if (i6 >= 0) {
        i = (int32_T)((uint32_T)i6 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i6 >> 1);
      }

      d_st.site = &hc_emlrtRSI;
      for (k = 1; k < i; k++) {
        c_y->data[k] = anew + (real_T)k;
        c_y->data[cdiff - k] = apnd - (real_T)k;
      }

      if (i << 1 == cdiff) {
        c_y->data[i] = (anew + apnd) / 2.0;
      } else {
        c_y->data[i] = anew + (real_T)i;
        c_y->data[i + 1] = apnd - (real_T)i;
      }
    }
  }

  emxInit_real_T(&c_st, &d_y, 2, &l_emlrtRTEI, true);
  i6 = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = c_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_y, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  cdiff = c_y->size[0] * c_y->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    d_y->data[i6] = c_y->data[i6] * fs / 512.0;
  }

  emxInit_real_T(sp, &pf, 2, &m_emlrtRTEI, true);
  st.site = &sb_emlrtRSI;
  b_frq2mel(&st, d_y, pf);
  i6 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  cdiff = pf->size[1];
  cdiff *= i;
  emxFree_real_T(&d_y);
  for (i6 = 0; i6 < cdiff; i6++) {
    pf->data[i6] -= mflh[0];
  }

  i6 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  cdiff = pf->size[1];
  cdiff *= i;
  for (i6 = 0; i6 < cdiff; i6++) {
    pf->data[i6] /= melrng;
  }

  /*  */
  /*   remove any incorrect entries in pf due to rounding errors */
  /*  */
  i6 = pf->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &l_emlrtBCI, sp);
  if (pf->data[0] < 0.0) {
    st.site = &tb_emlrtRSI;
    eml_null_assignment(&st, pf);
    b1 = (b_x + 1.0) + 1.0;
  }

  i6 = pf->size[1];
  i7 = pf->size[1];
  if (pf->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &m_emlrtBCI, sp) - 1]
      >= p + 1.0) {
    i6 = pf->size[1];
    st.site = &ub_emlrtRSI;
    b_eml_null_assignment(&st, pf, i6);
    b4--;
  }

  emxInit_real_T(sp, &fp, 2, &n_emlrtRTEI, true);
  i6 = fp->size[0] * fp->size[1];
  fp->size[0] = 1;
  fp->size[1] = pf->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)fp, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  cdiff = pf->size[0] * pf->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    fp->data[i6] = pf->data[i6];
  }

  b_floor(fp);

  /*  FFT bin_0 i contributes to filters_1 fp(1+i-b1)+[0 1] */
  for (i6 = 0; i6 < 2; i6++) {
    b_pf[i6] = pf->size[i6];
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_fp[i6] = fp->size[i6];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pf, b_fp, &e_emlrtECI, sp);
  i6 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  cdiff = pf->size[1];
  cdiff *= i;
  for (i6 = 0; i6 < cdiff; i6++) {
    pf->data[i6] -= fp->data[i6];
  }

  emxInit_boolean_T(sp, &c_x, 2, &l_emlrtRTEI, true);

  /*  multiplier for upper filter */
  st.site = &vb_emlrtRSI;
  i6 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = fp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  cdiff = fp->size[0] * fp->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    c_x->data[i6] = (fp->data[i6] > 0.0);
  }

  b_st.site = &lc_emlrtRSI;
  k = muIntScalarMin_sint32(1, c_x->size[1]);
  if (k <= c_x->size[1]) {
  } else {
    e_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&e_y, m6);
    c_st.site = &xd_emlrtRSI;
    error(&c_st, e_y, &w_emlrtMCI);
  }

  i = 0;
  c_st.site = &mc_emlrtRSI;
  if (1 > c_x->size[1]) {
    overflow = false;
  } else {
    overflow = (c_x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  cdiff = 1;
  exitg4 = false;
  while ((!exitg4) && (cdiff <= c_x->size[1])) {
    if (c_x->data[cdiff - 1]) {
      i = 1;
      ii_data[0] = cdiff;
      exitg4 = true;
    } else {
      cdiff++;
    }
  }

  if (i <= k) {
  } else {
    f_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&f_y, m6);
    c_st.site = &yd_emlrtRSI;
    error(&c_st, f_y, &x_emlrtMCI);
  }

  if (k == 1) {
    if (i == 0) {
      k = 0;
    }
  } else {
    if (1 > i) {
      cdiff = -1;
    } else {
      cdiff = 0;
    }

    i6 = 0;
    while (i6 <= cdiff) {
      b_ii_data[0] = ii_data[0];
      i6 = 1;
    }

    k = cdiff + 1;
    cdiff++;
    i6 = 0;
    while (i6 <= cdiff - 1) {
      ii_data[0] = b_ii_data[0];
      i6 = 1;
    }
  }

  k2_size[0] = 1;
  k2_size[1] = k;
  cdiff = k;
  for (i6 = 0; i6 < cdiff; i6++) {
    k2_data[i6] = ii_data[i6];
  }

  /*  FFT bin_1 k2+b1 is the first to contribute to both upper and lower filters */
  st.site = &wb_emlrtRSI;
  i6 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = fp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  cdiff = fp->size[0] * fp->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    c_x->data[i6] = (fp->data[i6] < p);
  }

  b_st.site = &lc_emlrtRSI;
  k = muIntScalarMin_sint32(1, c_x->size[1]);
  if (k <= c_x->size[1]) {
  } else {
    g_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&g_y, m6);
    c_st.site = &xd_emlrtRSI;
    error(&c_st, g_y, &w_emlrtMCI);
  }

  i = 0;
  cdiff = c_x->size[1];
  exitg3 = false;
  while ((!exitg3) && (cdiff > 0)) {
    if (c_x->data[cdiff - 1]) {
      i = 1;
      ii_data[0] = cdiff;
      exitg3 = true;
    } else {
      cdiff--;
    }
  }

  if (i <= k) {
  } else {
    h_y = NULL;
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&h_y, m6);
    c_st.site = &wd_emlrtRSI;
    error(&c_st, h_y, &y_emlrtMCI);
  }

  if (k == 1) {
    if (i == 0) {
      k = 0;
    }
  } else {
    if (1 > i) {
      cdiff = -1;
    } else {
      cdiff = 0;
    }

    i6 = 0;
    while (i6 <= cdiff) {
      b_ii_data[0] = ii_data[0];
      i6 = 1;
    }

    k = cdiff + 1;
    cdiff++;
    i6 = 0;
    while (i6 <= cdiff - 1) {
      ii_data[0] = b_ii_data[0];
      i6 = 1;
    }

    c_st.site = &nc_emlrtRSI;
    d_st.site = &oc_emlrtRSI;
  }

  k3_size[0] = 1;
  k3_size[1] = k;
  cdiff = k;
  for (i6 = 0; i6 < cdiff; i6++) {
    k3_data[i6] = ii_data[i6];
  }

  /*  FFT bin_1 k3+b1 is the last to contribute to both upper and lower filters */
  /*  FFT bin_1 k4+b1 is the last to contribute to any filters */
  if (k2_size[1] == 0) {
    k2_size[0] = 1;
    k2_size[1] = 1;
    k2_data[0] = (real_T)fp->size[1] + 1.0;
  }

  if (k == 0) {
    k3_size[0] = 1;
    k3_size[1] = 1;
    k3_data[0] = 0.0;
  }

  st.site = &xb_emlrtRSI;
  b_cdiff = norm(k3_data, k3_size);
  if (1.0 > b_cdiff) {
    cdiff = 0;
  } else {
    i6 = fp->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &k_emlrtBCI, sp);
    i6 = fp->size[1];
    i7 = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &j_emlrtDCI, sp);
    cdiff = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &k_emlrtBCI, sp);
  }

  st.site = &xb_emlrtRSI;
  b_cdiff = norm(k2_data, k2_size);
  if (b_cdiff > fp->size[1]) {
    i6 = 0;
    i7 = 0;
  } else {
    i6 = fp->size[1];
    i7 = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &i_emlrtDCI, sp);
    i6 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &j_emlrtBCI, sp) - 1;
    i7 = fp->size[1];
    i8 = fp->size[1];
    i7 = emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &j_emlrtBCI, sp);
  }

  emxInit_real_T(sp, &r, 2, &o_emlrtRTEI, true);
  i8 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (cdiff + i7) - i6;
  emxEnsureCapacity(sp, (emxArray__common *)r, i8, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (i8 = 0; i8 < cdiff; i8++) {
    r->data[r->size[0] * i8] = 1.0 + fp->data[i8];
  }

  i = i7 - i6;
  for (i7 = 0; i7 < i; i7++) {
    r->data[r->size[0] * (i7 + cdiff)] = fp->data[i6 + i7];
  }

  /*  filter number_1 */
  st.site = &yb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  d_st.site = &fc_emlrtRSI;
  if (k3_data[0] < 1.0) {
    cdiff = -1;
    b_apnd = 0;
  } else {
    i = (int32_T)muDoubleScalarFloor((k3_data[0] - 1.0) + 0.5);
    b_apnd = i + 1;
    cdiff = (i - (int32_T)k3_data[0]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)(int32_T)
        k3_data[0]) {
      i++;
      b_apnd = (int32_T)k3_data[0];
    } else if (cdiff > 0) {
      b_apnd = i;
    } else {
      i++;
    }

    cdiff = i - 1;
  }

  e_st.site = &gc_emlrtRSI;
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = cdiff + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (cdiff + 1 > 0) {
    c_y->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      c_y->data[cdiff] = b_apnd;
      i6 = cdiff + (cdiff < 0);
      if (i6 >= 0) {
        i = (int32_T)((uint32_T)i6 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i6 >> 1);
      }

      e_st.site = &hc_emlrtRSI;
      for (k = 1; k < i; k++) {
        c_y->data[k] = 1.0 + (real_T)k;
        c_y->data[cdiff - k] = b_apnd - k;
      }

      if (i << 1 == cdiff) {
        c_y->data[i] = (1.0 + (real_T)b_apnd) / 2.0;
      } else {
        c_y->data[i] = 1.0 + (real_T)i;
        c_y->data[i + 1] = b_apnd - i;
      }
    }
  }

  st.site = &yb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &pc_emlrtRSI;
  d_st.site = &fc_emlrtRSI;
  if (fp->size[1] < k2_data[0]) {
    cdiff = -1;
    anew = k2_data[0];
    apnd = fp->size[1];
    overflow = false;
  } else {
    anew = k2_data[0];
    ndbl = muDoubleScalarFloor(((real_T)fp->size[1] - k2_data[0]) + 0.5);
    apnd = k2_data[0] + ndbl;
    b_cdiff = apnd - (real_T)fp->size[1];
    b_absa = (uint32_T)muDoubleScalarAbs(k2_data[0]);
    i = fp->size[1];
    u0 = (uint32_T)i;
    if (muDoubleScalarAbs(b_cdiff) < 4.4408920985006262E-16 * (real_T)
        muIntScalarMax_uint32(b_absa, u0)) {
      ndbl++;
      apnd = fp->size[1];
    } else if (b_cdiff > 0.0) {
      apnd = k2_data[0] + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      cdiff = (int32_T)ndbl - 1;
    } else {
      cdiff = -1;
    }
  }

  e_st.site = &gc_emlrtRSI;
  if (!overflow) {
  } else {
    i_y = NULL;
    m6 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 21; i++) {
      cv31[i] = cv32[i];
    }

    emlrtInitCharArrayR2013a(&e_st, 21, m6, cv31);
    emlrtAssign(&i_y, m6);
    g_st.site = &vd_emlrtRSI;
    h_st.site = &se_emlrtRSI;
    error(&g_st, b_message(&h_st, i_y, &r_emlrtMCI), &s_emlrtMCI);
  }

  emxInit_real_T(&e_st, &j_y, 2, &l_emlrtRTEI, true);
  i6 = j_y->size[0] * j_y->size[1];
  j_y->size[0] = 1;
  j_y->size[1] = cdiff + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)j_y, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (cdiff + 1 > 0) {
    j_y->data[0] = anew;
    if (cdiff + 1 > 1) {
      j_y->data[cdiff] = apnd;
      i6 = cdiff + (cdiff < 0);
      if (i6 >= 0) {
        i = (int32_T)((uint32_T)i6 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i6 >> 1);
      }

      e_st.site = &hc_emlrtRSI;
      for (k = 1; k < i; k++) {
        j_y->data[k] = anew + (real_T)k;
        j_y->data[cdiff - k] = apnd - (real_T)k;
      }

      if (i << 1 == cdiff) {
        j_y->data[i] = (anew + apnd) / 2.0;
      } else {
        j_y->data[i] = anew + (real_T)i;
        j_y->data[i + 1] = apnd - (real_T)i;
      }
    }
  }

  emxInit_real_T(&d_st, &c, 2, &p_emlrtRTEI, true);
  i6 = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = c_y->size[1] + j_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  cdiff = c_y->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    c->data[c->size[0] * i6] = c_y->data[c_y->size[0] * i6];
  }

  cdiff = j_y->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    c->data[c->size[0] * (i6 + c_y->size[1])] = j_y->data[j_y->size[0] * i6];
  }

  emxFree_real_T(&j_y);

  /*  FFT bin_1 - b1 */
  st.site = &ac_emlrtRSI;
  b_cdiff = norm(k3_data, k3_size);
  if (1.0 > b_cdiff) {
    cdiff = 0;
  } else {
    i6 = pf->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &i_emlrtBCI, sp);
    i6 = pf->size[1];
    i7 = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &h_emlrtDCI, sp);
    cdiff = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &i_emlrtBCI, sp);
  }

  st.site = &ac_emlrtRSI;
  b_cdiff = norm(k2_data, k2_size);
  if (b_cdiff > fp->size[1]) {
    i6 = 0;
    i7 = 0;
  } else {
    i6 = pf->size[1];
    i7 = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &g_emlrtDCI, sp);
    i6 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &h_emlrtBCI, sp) - 1;
    i7 = pf->size[1];
    i8 = fp->size[1];
    i7 = emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &h_emlrtBCI, sp);
  }

  i8 = fp->size[0] * fp->size[1];
  fp->size[0] = 1;
  fp->size[1] = (cdiff + i7) - i6;
  emxEnsureCapacity(sp, (emxArray__common *)fp, i8, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (i8 = 0; i8 < cdiff; i8++) {
    fp->data[fp->size[0] * i8] = pf->data[i8];
  }

  i = i7 - i6;
  for (i7 = 0; i7 < i; i7++) {
    fp->data[fp->size[0] * (i7 + cdiff)] = 1.0 - pf->data[i6 + i7];
  }

  emxFree_real_T(&pf);

  /*  lowest fft bin_1 */
  /*  highest fft bin_1 */
  if (b1 < 0.0) {
    emxInit_real_T(sp, &b_c, 2, &l_emlrtRTEI, true);
    i6 = b_c->size[0] * b_c->size[1];
    b_c->size[0] = 1;
    b_c->size[1] = c->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_c, i6, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    cdiff = c->size[0] * c->size[1];
    for (i6 = 0; i6 < cdiff; i6++) {
      b_c->data[i6] = (c->data[i6] + b1) - 1.0;
    }

    b_abs(sp, b_c, c);
    i6 = c->size[0] * c->size[1];
    c->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)c, i6, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i = c->size[0];
    cdiff = c->size[1];
    cdiff *= i;
    emxFree_real_T(&b_c);
    for (i6 = 0; i6 < cdiff; i6++) {
      c->data[i6] = (c->data[i6] - b1) + 1.0;
    }

    /*  convert negative frequencies into positive */
  }

  emxInit_boolean_T(sp, &msk, 2, &q_emlrtRTEI, true);

  /*  end */
  /*  double all except the DC and Nyquist (if any) terms */
  i6 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  msk->size[1] = c->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)msk, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  cdiff = c->size[0] * c->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    msk->data[i6] = (c->data[i6] + (b1 + 1.0) > 2.0);
  }

  i6 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = c->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_x, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  cdiff = c->size[0] * c->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    c_x->data[i6] = (c->data[i6] + (b1 + 1.0) < 258.0);
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_pf[i6] = msk->size[i6];
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_fp[i6] = c_x->size[i6];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pf, b_fp, &d_emlrtECI, sp);
  i6 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)msk, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  i = msk->size[0];
  cdiff = msk->size[1];
  cdiff *= i;
  for (i6 = 0; i6 < cdiff; i6++) {
    msk->data[i6] = (msk->data[i6] && c_x->data[i6]);
  }

  emxFree_boolean_T(&c_x);
  emxInit_int32_T(sp, &r3, 2, &l_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 2, &l_emlrtRTEI, true);

  /*  there is no Nyquist term if n is odd */
  st.site = &bc_emlrtRSI;
  eml_li_find(&st, msk, r3);
  st.site = &bc_emlrtRSI;
  eml_li_find(&st, msk, r4);
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = r4->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  cdiff = r4->size[0] * r4->size[1];
  emxFree_boolean_T(&msk);
  for (i6 = 0; i6 < cdiff; i6++) {
    i7 = fp->size[1];
    i8 = r4->data[i6];
    c_y->data[i6] = fp->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7,
      &n_emlrtBCI, sp) - 1];
  }

  emxFree_int32_T(&r4);
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = c_y->size[0];
  cdiff = c_y->size[1];
  cdiff *= i;
  for (i6 = 0; i6 < cdiff; i6++) {
    c_y->data[i6] *= 2.0;
  }

  i6 = r3->size[1];
  i7 = c_y->size[1];
  emlrtSizeEqCheck1DFastR2012b(i6, i7, &c_emlrtECI, sp);
  i = fp->size[1];
  cdiff = c_y->size[0] * c_y->size[1];
  for (i6 = 0; i6 < cdiff; i6++) {
    i7 = r3->data[i6];
    fp->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, i, &o_emlrtBCI, sp) - 1] =
      c_y->data[i6];
  }

  emxFree_real_T(&c_y);
  emxFree_int32_T(&r3);

  /*  */
  /*  sort out the output argument options */
  /*  */
  st.site = &cc_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  if ((r->size[1] == 1) || (r->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    k_y = NULL;
    m6 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 36; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m6, cv33);
    emlrtAssign(&k_y, m6);
    d_st.site = &ud_emlrtRSI;
    i_st.site = &re_emlrtRSI;
    error(&d_st, b_message(&i_st, k_y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  if (r->size[1] > 0) {
  } else {
    l_y = NULL;
    m6 = emlrtCreateCharArray(2, iv22);
    for (i = 0; i < 39; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m6, cv35);
    emlrtAssign(&l_y, m6);
    d_st.site = &td_emlrtRSI;
    i_st.site = &qe_emlrtRSI;
    error(&d_st, b_message(&i_st, l_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  d_st.site = &cb_emlrtRSI;
  i = 1;
  melrng = r->data[0];
  if (r->size[1] > 1) {
    if (muDoubleScalarIsNaN(r->data[0])) {
      e_st.site = &db_emlrtRSI;
      overflow = (r->size[1] > 2147483646);
      if (overflow) {
        g_st.site = &q_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      cdiff = 2;
      exitg2 = false;
      while ((!exitg2) && (cdiff <= r->size[1])) {
        i = cdiff;
        if (!muDoubleScalarIsNaN(r->data[cdiff - 1])) {
          melrng = r->data[cdiff - 1];
          exitg2 = true;
        } else {
          cdiff++;
        }
      }
    }

    if (i < r->size[1]) {
      e_st.site = &eb_emlrtRSI;
      if (i + 1 > r->size[1]) {
        overflow = false;
      } else {
        overflow = (r->size[1] > 2147483646);
      }

      if (overflow) {
        g_st.site = &q_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (i + 1 <= r->size[1]) {
        if (r->data[i] > melrng) {
          melrng = r->data[i];
        }

        i++;
      }
    }
  }

  st.site = &dc_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  if ((c->size[1] == 1) || (c->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    m_y = NULL;
    m6 = emlrtCreateCharArray(2, iv23);
    for (i = 0; i < 36; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m6, cv33);
    emlrtAssign(&m_y, m6);
    d_st.site = &ud_emlrtRSI;
    i_st.site = &re_emlrtRSI;
    error(&d_st, b_message(&i_st, m_y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  if (c->size[1] > 0) {
  } else {
    n_y = NULL;
    m6 = emlrtCreateCharArray(2, iv24);
    for (i = 0; i < 39; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m6, cv35);
    emlrtAssign(&n_y, m6);
    d_st.site = &td_emlrtRSI;
    i_st.site = &qe_emlrtRSI;
    error(&d_st, b_message(&i_st, n_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  d_st.site = &cb_emlrtRSI;
  i = 1;
  ndbl = c->data[0];
  if (c->size[1] > 1) {
    if (muDoubleScalarIsNaN(c->data[0])) {
      e_st.site = &db_emlrtRSI;
      overflow = (c->size[1] > 2147483646);
      if (overflow) {
        g_st.site = &q_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      cdiff = 2;
      exitg1 = false;
      while ((!exitg1) && (cdiff <= c->size[1])) {
        i = cdiff;
        if (!muDoubleScalarIsNaN(c->data[cdiff - 1])) {
          ndbl = c->data[cdiff - 1];
          exitg1 = true;
        } else {
          cdiff++;
        }
      }
    }

    if (i < c->size[1]) {
      e_st.site = &eb_emlrtRSI;
      if (i + 1 > c->size[1]) {
        overflow = false;
      } else {
        overflow = (c->size[1] > 2147483646);
      }

      if (overflow) {
        g_st.site = &q_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (i + 1 <= c->size[1]) {
        if (c->data[i] > ndbl) {
          ndbl = c->data[i];
        }

        i++;
      }
    }
  }

  i6 = x->size[0] * x->size[1];
  b_cdiff = emlrtNonNegativeCheckFastR2012b(melrng, &l_emlrtDCI, sp);
  x->size[0] = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &k_emlrtDCI, sp);
  b_cdiff = emlrtNonNegativeCheckFastR2012b(ndbl, &n_emlrtDCI, sp);
  x->size[1] = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &m_emlrtDCI, sp);
  emxEnsureCapacity(sp, (emxArray__common *)x, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  b_cdiff = emlrtNonNegativeCheckFastR2012b(melrng, &l_emlrtDCI, sp);
  melrng = emlrtNonNegativeCheckFastR2012b(ndbl, &n_emlrtDCI, sp);
  cdiff = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &k_emlrtDCI, sp) *
    (int32_T)emlrtIntegerCheckFastR2012b(melrng, &m_emlrtDCI, sp);
  for (i6 = 0; i6 < cdiff; i6++) {
    x->data[i6] = 0.0;
  }

  i6 = r->size[1];
  i = 1;
  while (i - 1 <= i6 - 1) {
    i7 = x->size[0];
    i8 = r->size[1];
    b_cdiff = r->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i8, &q_emlrtBCI,
      sp) - 1];
    i8 = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &o_emlrtDCI, sp);
    cdiff = x->size[1];
    b_apnd = c->size[1];
    b_cdiff = c->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, b_apnd,
      &s_emlrtBCI, sp) - 1];
    b_apnd = (int32_T)emlrtIntegerCheckFastR2012b(b_cdiff, &p_emlrtDCI, sp);
    k = fp->size[1];
    x->data[(emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &p_emlrtBCI, sp) +
             x->size[0] * (emlrtDynamicBoundsCheckFastR2012b(b_apnd, 1, cdiff,
               &r_emlrtBCI, sp) - 1)) - 1] = fp->
      data[emlrtDynamicBoundsCheckFastR2012b(i, 1, k, &t_emlrtBCI, sp) - 1];
    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c);
  emxFree_real_T(&r);
  emxFree_real_T(&fp);

  /* Was x=sparse(r,c,v) */
  /*  if exactly three output arguments, then */
  i6 = mc->size[0] * mc->size[1];
  mc->size[0] = 1;
  mc->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)mc, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  mc->data[0] = b1 + 1.0;

  /*  delete mc output for legacy code compatibility */
  *mn = b4 + 1.0;

  /*  */
  /*  plot results if no output arguments or g option given */
  /*  */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (melbankm.c) */
