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
static emlrtRSInfo hb_emlrtRSI = { 139, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo ib_emlrtRSI = { 173, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo jb_emlrtRSI = { 175, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo kb_emlrtRSI = { 191, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo lb_emlrtRSI = { 197, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo mb_emlrtRSI = { 201, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo nb_emlrtRSI = { 206, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo ob_emlrtRSI = { 207, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo pb_emlrtRSI = { 222, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo qb_emlrtRSI = { 223, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo rb_emlrtRSI = { 224, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo sb_emlrtRSI = { 239, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRSInfo tb_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo ub_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo vb_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo wb_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo xb_emlrtRSI = { 10, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo yb_emlrtRSI = { 11, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ac_emlrtRSI = { 117, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo bc_emlrtRSI = { 41, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo cc_emlrtRSI = { 230, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo dc_emlrtRSI = { 272, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo ec_emlrtRSI = { 284, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo fc_emlrtRSI = { 31, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo gc_emlrtRSI = { 11, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo hc_emlrtRSI = { 26, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo ic_emlrtRSI = { 39, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtMCInfo u_emlrtMCI = { 248, 7, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtMCInfo v_emlrtMCI = { 405, 5, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo w_emlrtMCI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo x_emlrtMCI = { 57, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo y_emlrtMCI = { 56, 19, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo ab_emlrtMCI = { 125, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo bb_emlrtMCI = { 65, 1, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo cb_emlrtMCI = { 239, 9, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo db_emlrtMCI = { 261, 9, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtMCInfo eb_emlrtMCI = { 14, 5, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 284, 1, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo l_emlrtRTEI = { 1, 23, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 183, 9, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 204, 1, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 219, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 220, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 238, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtECInfo b_emlrtECI = { -1, 239, 5, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtECInfo c_emlrtECI = { 2, 238, 9, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 224, 25, "pm", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 224, 25, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 224, 8, "pm", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 224, 8, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 222, 25, "fp", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 222, 25, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 222, 10, "fp", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 222, 10, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  1 };

static emlrtECInfo d_emlrtECI = { 2, 205, 4, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 196, 4, "pf", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 200, 4, "pf", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 239, 14, "v", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 239, 5, "v", "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 17, 37, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

static emlrtRSInfo mc_emlrtRSI = { 125, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo nc_emlrtRSI = { 56, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo oc_emlrtRSI = { 14, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtRSInfo pc_emlrtRSI = { 404, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo qc_emlrtRSI = { 261, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo rc_emlrtRSI = { 65, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo sc_emlrtRSI = { 239, "find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo hd_emlrtRSI = { 57, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo id_emlrtRSI = { 405, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo sd_emlrtRSI = { 248, "melbankm",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melbankm.m"
};

/* Function Declarations */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx);
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static const mxArray *sparse(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  real_T idx)
{
  boolean_T p;
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 31 };

  const mxArray *m19;
  char_T cv29[31];
  int32_T i;
  static const char_T cv30[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T k;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &xb_emlrtRSI;
  p = true;
  if ((idx < 1.0) || ((int32_T)idx > x->size[1]) || (idx != muDoubleScalarFloor
       (idx))) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m19 = emlrtCreateCharArray(2, iv24);
    for (i = 0; i < 31; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m19, cv29);
    emlrtAssign(&y, m19);
    b_st.site = &nc_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    error(&b_st, b_message(&c_st, y, &x_emlrtMCI), &y_emlrtMCI);
  }

  st.site = &yb_emlrtRSI;
  i = x->size[1] - 1;
  for (k = (int32_T)idx; k <= i; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m19 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m19);
    b_st.site = &mc_emlrtRSI;
    error(&b_st, b_y, &ab_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &s_emlrtRTEI, true);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, k, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
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
  const mxArray *m8;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &ic_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &p_emlrtRSI;
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
    m8 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m8);
    st.site = &oc_emlrtRSI;
    error(&st, b_y, &eb_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &k_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  j = 0;
  st.site = &hc_emlrtRSI;
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
  static const int32_T iv23[2] = { 1, 31 };

  const mxArray *m18;
  char_T cv27[31];
  int32_T i;
  static const char_T cv28[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
  st.site = &xb_emlrtRSI;
  overflow = true;
  if (1 > x->size[1]) {
    overflow = false;
  }

  if (overflow) {
  } else {
    y = NULL;
    m18 = emlrtCreateCharArray(2, iv23);
    for (i = 0; i < 31; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m18, cv27);
    emlrtAssign(&y, m18);
    b_st.site = &nc_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    error(&b_st, b_message(&c_st, y, &x_emlrtMCI), &y_emlrtMCI);
  }

  st.site = &yb_emlrtRSI;
  i = x->size[1] - 1;
  b_st.site = &ac_emlrtRSI;
  if (1 > x->size[1] - 1) {
    overflow = false;
  } else {
    overflow = (x->size[1] - 1 > 2147483646);
  }

  if (overflow) {
    d_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= i; k++) {
    x->data[k - 1] = x->data[k];
  }

  if (i <= i + 1) {
  } else {
    b_y = NULL;
    m18 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m18);
    b_st.site = &mc_emlrtRSI;
    error(&b_st, b_y, &ab_emlrtMCI);
  }

  if (1 > i) {
    i = 0;
  }

  emxInit_real_T(&st, &b_x, 2, &s_emlrtRTEI, true);
  k = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, k, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  for (k = 0; k < i; k++) {
    b_x->data[b_x->size[0] * k] = x->data[k];
  }

  k = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &s_emlrtRTEI);
  i = b_x->size[1];
  for (k = 0; k < i; k++) {
    x->data[x->size[0] * k] = b_x->data[b_x->size[0] * k];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m9;
  real_T *pData;
  int32_T i7;
  int32_T i;
  y = NULL;
  m9 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m9);
  i7 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i7] = u->data[u->size[0] * i];
    i7++;
  }

  emlrtAssign(&y, m9);
  return y;
}

static const mxArray *sparse(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m17;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m17, 3, pArrays, "sparse", true, location);
}

void melbankm(const emlrtStack *sp, real_T p, real_T fs, const mxArray **x,
              emxArray_real_T *mc, real_T *mn)
{
  real_T dv3[2];
  int32_T i4;
  real_T mflh[2];
  real_T melrng;
  int32_T k;
  real_T blim[4];
  real_T b_mflh[4];
  int32_T ndbl;
  boolean_T overflow;
  real_T b_ndbl;
  real_T cdiff;
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 21 };

  const mxArray *m7;
  char_T cv25[21];
  int32_T i;
  static const char_T cv26[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  real_T b_x;
  real_T b1;
  real_T b4;
  real_T anew;
  real_T apnd;
  real_T absa;
  real_T absb;
  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 21 };

  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  int32_T loop_ub;
  emxArray_real_T *pf;
  int32_T i5;
  emxArray_real_T *fp;
  int32_T b_pf[2];
  int32_T b_fp[2];
  emxArray_boolean_T *c_x;
  const mxArray *e_y;
  int32_T ii_data[1];
  boolean_T exitg2;
  const mxArray *f_y;
  int32_T b_ii_data[1];
  int32_T k2_size[2];
  real_T k2_data[1];
  const mxArray *g_y;
  boolean_T exitg1;
  const mxArray *h_y;
  int32_T k3_size[2];
  real_T k3_data[1];
  int32_T i6;
  int32_T b_apnd;
  uint32_T b_absa;
  uint32_T u0;
  const mxArray *i_y;
  static const int32_T iv17[2] = { 1, 21 };

  emxArray_real_T *v;
  emxArray_real_T *c;
  emxArray_real_T *b_c;
  emxArray_boolean_T *msk;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  *x = NULL;

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
  for (i4 = 0; i4 < 2; i4++) {
    dv3[i4] = 0.5 * (real_T)i4 * fs;
  }

  st.site = &hb_emlrtRSI;
  frq2mel(dv3, mflh);

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
  for (i4 = 0; i4 < 4; i4++) {
    b_mflh[i4] = mflh[0] + blim[i4] * melrng;
  }

  st.site = &ib_emlrtRSI;
  mel2frq(b_mflh, blim);
  for (i4 = 0; i4 < 4; i4++) {
    blim[i4] = blim[i4] * 512.0 / fs;
  }

  st.site = &jb_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  if (muDoubleScalarIsNaN(p)) {
    ndbl = 1;
    overflow = false;
  } else if (p < 1.0) {
    ndbl = 0;
    overflow = false;
  } else if (muDoubleScalarIsInf(p)) {
    ndbl = 1;
    overflow = !(1.0 == p);
  } else {
    b_ndbl = muDoubleScalarFloor((p - 1.0) + 0.5);
    cdiff = (1.0 + b_ndbl) - p;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * p) {
      b_ndbl++;
    } else if (cdiff > 0.0) {
    } else {
      b_ndbl++;
    }

    overflow = (2.147483647E+9 < b_ndbl);
    if (b_ndbl >= 0.0) {
      ndbl = (int32_T)b_ndbl;
    } else {
      ndbl = 0;
    }
  }

  d_st.site = &vb_emlrtRSI;
  if (!overflow) {
  } else {
    y = NULL;
    m7 = emlrtCreateCharArray(2, iv15);
    for (i = 0; i < 21; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m7, cv25);
    emlrtAssign(&y, m7);
    e_st.site = &pc_emlrtRSI;
    f_st.site = &id_emlrtRSI;
    error(&e_st, b_message(&f_st, y, &v_emlrtMCI), &w_emlrtMCI);
  }

  if ((ndbl > 0) && (ndbl > 1)) {
    d_st.site = &wb_emlrtRSI;
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
  st.site = &kb_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  c_st.site = &ub_emlrtRSI;
  if (muDoubleScalarIsNaN(b1) || muDoubleScalarIsNaN(b4)) {
    ndbl = 0;
    anew = rtNaN;
    apnd = b4;
    overflow = false;
  } else if (b4 < b_x + 1.0) {
    ndbl = -1;
    anew = b_x + 1.0;
    apnd = b4;
    overflow = false;
  } else if (muDoubleScalarIsInf(b1) || muDoubleScalarIsInf(b4)) {
    ndbl = 0;
    anew = rtNaN;
    apnd = b4;
    overflow = !(b_x + 1.0 == b4);
  } else {
    anew = b_x + 1.0;
    b_ndbl = muDoubleScalarFloor((b4 - (b_x + 1.0)) + 0.5);
    apnd = (b_x + 1.0) + b_ndbl;
    cdiff = apnd - b4;
    absa = muDoubleScalarAbs(b_x + 1.0);
    absb = muDoubleScalarAbs(b4);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      b_ndbl++;
      apnd = b4;
    } else if (cdiff > 0.0) {
      apnd = (b_x + 1.0) + (b_ndbl - 1.0);
    } else {
      b_ndbl++;
    }

    overflow = (2.147483647E+9 < b_ndbl);
    if (b_ndbl >= 0.0) {
      ndbl = (int32_T)b_ndbl - 1;
    } else {
      ndbl = -1;
    }
  }

  d_st.site = &vb_emlrtRSI;
  if (!overflow) {
  } else {
    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv16);
    for (i = 0; i < 21; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 21, m7, cv25);
    emlrtAssign(&b_y, m7);
    e_st.site = &pc_emlrtRSI;
    f_st.site = &id_emlrtRSI;
    error(&e_st, b_message(&f_st, b_y, &v_emlrtMCI), &w_emlrtMCI);
  }

  emxInit_real_T(&d_st, &c_y, 2, &l_emlrtRTEI, true);
  i4 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = ndbl + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c_y, i4, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (ndbl + 1 > 0) {
    c_y->data[0] = anew;
    if (ndbl + 1 > 1) {
      c_y->data[ndbl] = apnd;
      i4 = ndbl + (ndbl < 0);
      if (i4 >= 0) {
        i = (int32_T)((uint32_T)i4 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i4 >> 1);
      }

      d_st.site = &wb_emlrtRSI;
      for (k = 1; k < i; k++) {
        c_y->data[k] = anew + (real_T)k;
        c_y->data[ndbl - k] = apnd - (real_T)k;
      }

      if (i << 1 == ndbl) {
        c_y->data[i] = (anew + apnd) / 2.0;
      } else {
        c_y->data[i] = anew + (real_T)i;
        c_y->data[i + 1] = apnd - (real_T)i;
      }
    }
  }

  emxInit_real_T(&c_st, &d_y, 2, &l_emlrtRTEI, true);
  i4 = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = c_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_y, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    d_y->data[i4] = c_y->data[i4] * fs / 512.0;
  }

  emxInit_real_T(sp, &pf, 2, &m_emlrtRTEI, true);
  st.site = &kb_emlrtRSI;
  b_frq2mel(&st, d_y, pf);
  i4 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  ndbl = pf->size[1];
  loop_ub = i * ndbl;
  emxFree_real_T(&d_y);
  for (i4 = 0; i4 < loop_ub; i4++) {
    pf->data[i4] -= mflh[0];
  }

  i4 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  ndbl = pf->size[1];
  loop_ub = i * ndbl;
  for (i4 = 0; i4 < loop_ub; i4++) {
    pf->data[i4] /= melrng;
  }

  /*  */
  /*   remove any incorrect entries in pf due to rounding errors */
  /*  */
  i4 = pf->size[1];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &j_emlrtBCI, sp);
  if (pf->data[0] < 0.0) {
    st.site = &lb_emlrtRSI;
    eml_null_assignment(&st, pf);
    b1 = (b_x + 1.0) + 1.0;
  }

  i4 = pf->size[1];
  i5 = pf->size[1];
  if (pf->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &k_emlrtBCI, sp) - 1]
      >= p + 1.0) {
    i4 = pf->size[1];
    st.site = &mb_emlrtRSI;
    b_eml_null_assignment(&st, pf, i4);
    b4--;
  }

  emxInit_real_T(sp, &fp, 2, &n_emlrtRTEI, true);
  i4 = fp->size[0] * fp->size[1];
  fp->size[0] = 1;
  fp->size[1] = pf->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)fp, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = pf->size[0] * pf->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    fp->data[i4] = pf->data[i4];
  }

  b_floor(fp);

  /*  FFT bin_0 i contributes to filters_1 fp(1+i-b1)+[0 1] */
  for (i4 = 0; i4 < 2; i4++) {
    b_pf[i4] = pf->size[i4];
  }

  for (i4 = 0; i4 < 2; i4++) {
    b_fp[i4] = fp->size[i4];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pf, b_fp, &d_emlrtECI, sp);
  i4 = pf->size[0] * pf->size[1];
  pf->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)pf, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = pf->size[0];
  ndbl = pf->size[1];
  loop_ub = i * ndbl;
  for (i4 = 0; i4 < loop_ub; i4++) {
    pf->data[i4] -= fp->data[i4];
  }

  emxInit_boolean_T(sp, &c_x, 2, &l_emlrtRTEI, true);

  /*  multiplier for upper filter */
  st.site = &nb_emlrtRSI;
  i4 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = fp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, i4, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  loop_ub = fp->size[0] * fp->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_x->data[i4] = (fp->data[i4] > 0.0);
  }

  b_st.site = &bc_emlrtRSI;
  k = muIntScalarMin_sint32(1, c_x->size[1]);
  if (k <= c_x->size[1]) {
  } else {
    e_y = NULL;
    m7 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&e_y, m7);
    c_st.site = &rc_emlrtRSI;
    error(&c_st, e_y, &bb_emlrtMCI);
  }

  i = 0;
  c_st.site = &cc_emlrtRSI;
  if (1 > c_x->size[1]) {
    overflow = false;
  } else {
    overflow = (c_x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ndbl = 1;
  exitg2 = false;
  while ((!exitg2) && (ndbl <= c_x->size[1])) {
    if (c_x->data[ndbl - 1]) {
      i = 1;
      ii_data[0] = ndbl;
      exitg2 = true;
    } else {
      ndbl++;
    }
  }

  if (i <= k) {
  } else {
    f_y = NULL;
    m7 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&f_y, m7);
    c_st.site = &sc_emlrtRSI;
    error(&c_st, f_y, &cb_emlrtMCI);
  }

  if (k == 1) {
    if (i == 0) {
      k = 0;
    }
  } else {
    if (1 > i) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    i4 = 0;
    while (i4 <= loop_ub) {
      b_ii_data[0] = ii_data[0];
      i4 = 1;
    }

    k = loop_ub + 1;
    loop_ub++;
    i4 = 0;
    while (i4 <= loop_ub - 1) {
      ii_data[0] = b_ii_data[0];
      i4 = 1;
    }
  }

  k2_size[0] = 1;
  k2_size[1] = k;
  loop_ub = k;
  for (i4 = 0; i4 < loop_ub; i4++) {
    k2_data[i4] = ii_data[i4];
  }

  /*  FFT bin_1 k2+b1 is the first to contribute to both upper and lower filters */
  st.site = &ob_emlrtRSI;
  i4 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = fp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, i4, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  loop_ub = fp->size[0] * fp->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_x->data[i4] = (fp->data[i4] < p);
  }

  b_st.site = &bc_emlrtRSI;
  k = muIntScalarMin_sint32(1, c_x->size[1]);
  if (k <= c_x->size[1]) {
  } else {
    g_y = NULL;
    m7 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&g_y, m7);
    c_st.site = &rc_emlrtRSI;
    error(&c_st, g_y, &bb_emlrtMCI);
  }

  i = 0;
  ndbl = c_x->size[1];
  exitg1 = false;
  while ((!exitg1) && (ndbl > 0)) {
    if (c_x->data[ndbl - 1]) {
      i = 1;
      ii_data[0] = ndbl;
      exitg1 = true;
    } else {
      ndbl--;
    }
  }

  if (i <= k) {
  } else {
    h_y = NULL;
    m7 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&h_y, m7);
    c_st.site = &qc_emlrtRSI;
    error(&c_st, h_y, &db_emlrtMCI);
  }

  if (k == 1) {
    if (i == 0) {
      k = 0;
    }
  } else {
    if (1 > i) {
      loop_ub = -1;
    } else {
      loop_ub = 0;
    }

    i4 = 0;
    while (i4 <= loop_ub) {
      b_ii_data[0] = ii_data[0];
      i4 = 1;
    }

    k = loop_ub + 1;
    loop_ub++;
    i4 = 0;
    while (i4 <= loop_ub - 1) {
      ii_data[0] = b_ii_data[0];
      i4 = 1;
    }

    c_st.site = &dc_emlrtRSI;
    d_st.site = &ec_emlrtRSI;
  }

  k3_size[0] = 1;
  k3_size[1] = k;
  loop_ub = k;
  for (i4 = 0; i4 < loop_ub; i4++) {
    k3_data[i4] = ii_data[i4];
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

  st.site = &pb_emlrtRSI;
  melrng = norm(k3_data, k3_size);
  if (1.0 > melrng) {
    loop_ub = 0;
  } else {
    i4 = fp->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i4, &i_emlrtBCI, sp);
    i4 = fp->size[1];
    i5 = (int32_T)emlrtIntegerCheckFastR2012b(melrng, &j_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &i_emlrtBCI, sp);
  }

  st.site = &pb_emlrtRSI;
  melrng = norm(k2_data, k2_size);
  if (melrng > fp->size[1]) {
    i4 = 0;
    i5 = 0;
  } else {
    i4 = fp->size[1];
    i5 = (int32_T)emlrtIntegerCheckFastR2012b(melrng, &i_emlrtDCI, sp);
    i4 = emlrtDynamicBoundsCheckFastR2012b(i5, 1, i4, &h_emlrtBCI, sp) - 1;
    i5 = fp->size[1];
    i6 = fp->size[1];
    i5 = emlrtDynamicBoundsCheckFastR2012b(i6, 1, i5, &h_emlrtBCI, sp);
  }

  /*  filter number_1 */
  st.site = &qb_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &ub_emlrtRSI;
  if (k3_data[0] < 1.0) {
    ndbl = -1;
    b_apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor((k3_data[0] - 1.0) + 0.5);
    b_apnd = ndbl + 1;
    i = (ndbl - (int32_T)k3_data[0]) + 1;
    if (muDoubleScalarAbs(i) < 4.4408920985006262E-16 * (real_T)(int32_T)
        k3_data[0]) {
      ndbl++;
      b_apnd = (int32_T)k3_data[0];
    } else if (i > 0) {
      b_apnd = ndbl;
    } else {
      ndbl++;
    }

    ndbl--;
  }

  e_st.site = &vb_emlrtRSI;
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = ndbl + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (ndbl + 1 > 0) {
    c_y->data[0] = 1.0;
    if (ndbl + 1 > 1) {
      c_y->data[ndbl] = b_apnd;
      i6 = ndbl + (ndbl < 0);
      if (i6 >= 0) {
        i = (int32_T)((uint32_T)i6 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i6 >> 1);
      }

      e_st.site = &wb_emlrtRSI;
      for (k = 1; k < i; k++) {
        c_y->data[k] = 1.0 + (real_T)k;
        c_y->data[ndbl - k] = b_apnd - k;
      }

      if (i << 1 == ndbl) {
        c_y->data[i] = (1.0 + (real_T)b_apnd) / 2.0;
      } else {
        c_y->data[i] = 1.0 + (real_T)i;
        c_y->data[i + 1] = b_apnd - i;
      }
    }
  }

  st.site = &qb_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &ub_emlrtRSI;
  if (fp->size[1] < k2_data[0]) {
    ndbl = -1;
    anew = k2_data[0];
    apnd = fp->size[1];
    overflow = false;
  } else {
    anew = k2_data[0];
    b_ndbl = muDoubleScalarFloor(((real_T)fp->size[1] - k2_data[0]) + 0.5);
    apnd = k2_data[0] + b_ndbl;
    cdiff = apnd - (real_T)fp->size[1];
    b_absa = (uint32_T)muDoubleScalarAbs(k2_data[0]);
    ndbl = fp->size[1];
    u0 = (uint32_T)ndbl;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)
        muIntScalarMax_uint32(b_absa, u0)) {
      b_ndbl++;
      apnd = fp->size[1];
    } else if (cdiff > 0.0) {
      apnd = k2_data[0] + (b_ndbl - 1.0);
    } else {
      b_ndbl++;
    }

    overflow = (2.147483647E+9 < b_ndbl);
    if (b_ndbl >= 0.0) {
      ndbl = (int32_T)b_ndbl - 1;
    } else {
      ndbl = -1;
    }
  }

  e_st.site = &vb_emlrtRSI;
  if (!overflow) {
  } else {
    i_y = NULL;
    m7 = emlrtCreateCharArray(2, iv17);
    for (i = 0; i < 21; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(&e_st, 21, m7, cv25);
    emlrtAssign(&i_y, m7);
    g_st.site = &pc_emlrtRSI;
    h_st.site = &id_emlrtRSI;
    error(&g_st, b_message(&h_st, i_y, &v_emlrtMCI), &w_emlrtMCI);
  }

  emxInit_real_T(&e_st, &v, 2, &p_emlrtRTEI, true);
  i6 = v->size[0] * v->size[1];
  v->size[0] = 1;
  v->size[1] = ndbl + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)v, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  if (ndbl + 1 > 0) {
    v->data[0] = anew;
    if (ndbl + 1 > 1) {
      v->data[ndbl] = apnd;
      i6 = ndbl + (ndbl < 0);
      if (i6 >= 0) {
        i = (int32_T)((uint32_T)i6 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i6 >> 1);
      }

      e_st.site = &wb_emlrtRSI;
      for (k = 1; k < i; k++) {
        v->data[k] = anew + (real_T)k;
        v->data[ndbl - k] = apnd - (real_T)k;
      }

      if (i << 1 == ndbl) {
        v->data[i] = (anew + apnd) / 2.0;
      } else {
        v->data[i] = anew + (real_T)i;
        v->data[i + 1] = apnd - (real_T)i;
      }
    }
  }

  emxInit_real_T(&d_st, &c, 2, &o_emlrtRTEI, true);
  i6 = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = c_y->size[1] + v->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  ndbl = c_y->size[1];
  for (i6 = 0; i6 < ndbl; i6++) {
    c->data[c->size[0] * i6] = c_y->data[c_y->size[0] * i6];
  }

  ndbl = v->size[1];
  for (i6 = 0; i6 < ndbl; i6++) {
    c->data[c->size[0] * (i6 + c_y->size[1])] = v->data[v->size[0] * i6];
  }

  /*  FFT bin_1 - b1 */
  st.site = &rb_emlrtRSI;
  melrng = norm(k3_data, k3_size);
  if (1.0 > melrng) {
    ndbl = 0;
  } else {
    i6 = pf->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &g_emlrtBCI, sp);
    i6 = pf->size[1];
    k = (int32_T)emlrtIntegerCheckFastR2012b(melrng, &h_emlrtDCI, sp);
    ndbl = emlrtDynamicBoundsCheckFastR2012b(k, 1, i6, &g_emlrtBCI, sp);
  }

  st.site = &rb_emlrtRSI;
  melrng = norm(k2_data, k2_size);
  if (melrng > fp->size[1]) {
    i6 = 0;
    k = 0;
  } else {
    i6 = pf->size[1];
    k = (int32_T)emlrtIntegerCheckFastR2012b(melrng, &g_emlrtDCI, sp);
    i6 = emlrtDynamicBoundsCheckFastR2012b(k, 1, i6, &f_emlrtBCI, sp) - 1;
    k = pf->size[1];
    i = fp->size[1];
    k = emlrtDynamicBoundsCheckFastR2012b(i, 1, k, &f_emlrtBCI, sp);
  }

  i = v->size[0] * v->size[1];
  v->size[0] = 1;
  v->size[1] = (ndbl + k) - i6;
  emxEnsureCapacity(sp, (emxArray__common *)v, i, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (i = 0; i < ndbl; i++) {
    v->data[v->size[0] * i] = pf->data[i];
  }

  i = k - i6;
  for (k = 0; k < i; k++) {
    v->data[v->size[0] * (k + ndbl)] = 1.0 - pf->data[i6 + k];
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
    ndbl = c->size[0] * c->size[1];
    for (i6 = 0; i6 < ndbl; i6++) {
      b_c->data[i6] = (c->data[i6] + b1) - 1.0;
    }

    b_abs(sp, b_c, c);
    i6 = c->size[0] * c->size[1];
    c->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)c, i6, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    ndbl = c->size[0];
    i = c->size[1];
    ndbl *= i;
    emxFree_real_T(&b_c);
    for (i6 = 0; i6 < ndbl; i6++) {
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
  ndbl = c->size[0] * c->size[1];
  for (i6 = 0; i6 < ndbl; i6++) {
    msk->data[i6] = (c->data[i6] + (b1 + 1.0) > 2.0);
  }

  i6 = c_x->size[0] * c_x->size[1];
  c_x->size[0] = 1;
  c_x->size[1] = c->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_x, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  ndbl = c->size[0] * c->size[1];
  for (i6 = 0; i6 < ndbl; i6++) {
    c_x->data[i6] = (c->data[i6] + (b1 + 1.0) < 258.0);
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_pf[i6] = msk->size[i6];
  }

  for (i6 = 0; i6 < 2; i6++) {
    b_fp[i6] = c_x->size[i6];
  }

  emlrtSizeEqCheck2DFastR2012b(b_pf, b_fp, &c_emlrtECI, sp);
  i6 = msk->size[0] * msk->size[1];
  msk->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)msk, i6, (int32_T)sizeof(boolean_T),
                    &l_emlrtRTEI);
  ndbl = msk->size[0];
  i = msk->size[1];
  ndbl *= i;
  for (i6 = 0; i6 < ndbl; i6++) {
    msk->data[i6] = (msk->data[i6] && c_x->data[i6]);
  }

  emxFree_boolean_T(&c_x);
  emxInit_int32_T(sp, &r0, 2, &l_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 2, &l_emlrtRTEI, true);

  /*  there is no Nyquist term if n is odd */
  st.site = &sb_emlrtRSI;
  eml_li_find(&st, msk, r0);
  st.site = &sb_emlrtRSI;
  eml_li_find(&st, msk, r1);
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  ndbl = r1->size[0] * r1->size[1];
  emxFree_boolean_T(&msk);
  for (i6 = 0; i6 < ndbl; i6++) {
    k = v->size[1];
    i = r1->data[i6];
    c_y->data[i6] = v->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, k,
      &l_emlrtBCI, sp) - 1];
  }

  emxFree_int32_T(&r1);
  i6 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  ndbl = c_y->size[0];
  i = c_y->size[1];
  ndbl *= i;
  for (i6 = 0; i6 < ndbl; i6++) {
    c_y->data[i6] *= 2.0;
  }

  i6 = r0->size[1];
  k = c_y->size[1];
  emlrtSizeEqCheck1DFastR2012b(i6, k, &b_emlrtECI, sp);
  i = v->size[1];
  ndbl = c_y->size[0] * c_y->size[1];
  for (i6 = 0; i6 < ndbl; i6++) {
    k = r0->data[i6];
    v->data[emlrtDynamicBoundsCheckFastR2012b(k, 1, i, &m_emlrtBCI, sp) - 1] =
      c_y->data[i6];
  }

  emxFree_real_T(&c_y);
  emxFree_int32_T(&r0);
  emxInit_real_T(sp, &r2, 2, &l_emlrtRTEI, true);

  /*  */
  /*  sort out the output argument options */
  /*  */
  /* r */
  /* c */
  /* v */
  i6 = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = (loop_ub + i5) - i4;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i6, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  for (i6 = 0; i6 < loop_ub; i6++) {
    r2->data[r2->size[0] * i6] = 1.0 + fp->data[i6];
  }

  ndbl = i5 - i4;
  for (i5 = 0; i5 < ndbl; i5++) {
    r2->data[r2->size[0] * (i5 + loop_ub)] = fp->data[i4 + i5];
  }

  emxFree_real_T(&fp);
  st.site = &sd_emlrtRSI;
  emlrtAssign(x, sparse(&st, emlrt_marshallOut(r2), emlrt_marshallOut(c),
                        emlrt_marshallOut(v), &u_emlrtMCI));

  /*  if exactly three output arguments, then */
  i4 = mc->size[0] * mc->size[1];
  mc->size[0] = 1;
  mc->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)mc, i4, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  mc->data[0] = b1 + 1.0;

  /*  delete mc output for legacy code compatibility */
  *mn = b4 + 1.0;

  /*  */
  /*  plot results if no output arguments or g option given */
  /*  */
  emxFree_real_T(&r2);
  emxFree_real_T(&v);
  emxFree_real_T(&c);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (melbankm.c) */
