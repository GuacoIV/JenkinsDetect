/*
 * rfft.c
 *
 * Code generation for function 'rfft'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "rfft.h"
#include "fft.h"
#include "norm.h"
#include "JenkinsCompare_emxutil.h"
#include "eml_error.h"
#include "melcepst.h"
#include "eml_int_forloop_overflow_check.h"
#include "prod.h"
#include "JenkinsCompare_mexutil.h"
#include "JenkinsCompare_data.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 49, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRSInfo k_emlrtRSI = { 50, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRSInfo l_emlrtRSI = { 53, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRSInfo m_emlrtRSI = { 55, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRSInfo v_emlrtRSI = { 47, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo w_emlrtRSI = { 16, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo x_emlrtRSI = { 120, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo y_emlrtRSI = { 69, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo fb_emlrtRSI = { 34, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo gb_emlrtRSI = { 35, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo hb_emlrtRSI = { 244, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ib_emlrtRSI = { 246, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo jb_emlrtRSI = { 261, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo kb_emlrtRSI = { 266, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo lb_emlrtRSI = { 160, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo mb_emlrtRSI = { 103, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo nb_emlrtRSI = { 22, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo ob_emlrtRSI = { 54, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtMCInfo g_emlrtMCI = { 53, 5, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtMCInfo h_emlrtMCI = { 52, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtMCInfo i_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo j_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo k_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo l_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo o_emlrtMCI = { 253, 1, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo p_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtMCInfo q_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 12, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 51, 1, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 255, 1, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 1, 10, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 155, 14, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtBCInfo f_emlrtBCI = { 1, 2, 50, 56, "s", "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 50, 56, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 2, 50, 23, "s", "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 50, 23, "rfft",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\rfft.m",
  1 };

static emlrtDCInfo f_emlrtDCI = { 255, 48, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m",
  4 };

static emlrtRSInfo ae_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo be_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ce_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ge_emlrtRSI = { 52, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo he_emlrtRSI = { 253, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo te_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo we_emlrtRSI = { 53, "reshape",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo bf_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

static emlrtRSInfo cf_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static void b_eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2]);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1);
static void make_bitarray(const emlrtStack *sp, real_T n, const emxArray_real_T *
  idx, emxArray_boolean_T *b);
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static void b_eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2])
{
  int32_T i;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv16[2] = { 1, 57 };

  const mxArray *m5;
  char_T cv27[57];
  static const char_T cv28[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 21 };

  char_T cv29[21];
  static const char_T cv30[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  i = 0;
  do {
    exitg2 = 0;
    if (i < 2) {
      if ((varargin_1[i] != muDoubleScalarFloor(varargin_1[i])) ||
          muDoubleScalarIsInf(varargin_1[i])) {
        p = false;
        exitg2 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    i = 0;
    do {
      exitg1 = 0;
      if (i < 2) {
        if ((-2.147483648E+9 > varargin_1[i]) || (2.147483647E+9 < varargin_1[i]))
        {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv16);
    for (i = 0; i < 57; i++) {
      cv27[i] = cv28[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m5, cv27);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MIN_int32_T;
    emlrtAssign(&b_y, m5);
    c_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MAX_int32_T;
    emlrtAssign(&c_y, m5);
    st.site = &be_emlrtRSI;
    b_st.site = &bf_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &p_emlrtMCI), &q_emlrtMCI);
  }

  n = 1.0;
  for (i = 0; i < 2; i++) {
    n *= varargin_1[i];
  }

  if (2.147483647E+9 >= n) {
  } else {
    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv17);
    for (i = 0; i < 21; i++) {
      cv29[i] = cv30[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m5, cv29);
    emlrtAssign(&d_y, m5);
    st.site = &ae_emlrtRSI;
    b_st.site = &te_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &k_emlrtMCI), &l_emlrtMCI);
  }
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m12;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 3, pArrays, "message", true,
    location);
}

static void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 28 };

  const mxArray *m4;
  char_T cv23[28];
  int32_T i;
  static const char_T cv24[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv15[2] = { 1, 21 };

  char_T cv25[21];
  static const char_T cv26[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv14);
    for (i = 0; i < 28; i++) {
      cv23[i] = cv24[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m4, cv23);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MIN_int32_T;
    emlrtAssign(&b_y, m4);
    c_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MAX_int32_T;
    emlrtAssign(&c_y, m4);
    st.site = &ce_emlrtRSI;
    b_st.site = &cf_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if (2.147483647E+9 >= varargin_1) {
  } else {
    d_y = NULL;
    m4 = emlrtCreateCharArray(2, iv15);
    for (i = 0; i < 21; i++) {
      cv25[i] = cv26[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m4, cv25);
    emlrtAssign(&d_y, m4);
    st.site = &ae_emlrtRSI;
    b_st.site = &te_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &k_emlrtMCI), &l_emlrtMCI);
  }
}

static void make_bitarray(const emlrtStack *sp, real_T n, const emxArray_real_T *
  idx, emxArray_boolean_T *b)
{
  int32_T k;
  int32_T loop_ub;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = (int32_T)n;
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(boolean_T),
                    &j_emlrtRTEI);
  loop_ub = (int32_T)n;
  for (k = 0; k < loop_ub; k++) {
    b->data[k] = false;
  }

  st.site = &lb_emlrtRSI;
  if (1 > idx->size[1]) {
    overflow = false;
  } else {
    overflow = (idx->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= idx->size[1]; k++) {
    b->data[(int32_T)idx->data[k - 1] - 1] = true;
  }
}

static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  int32_T n;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  st.site = &mb_emlrtRSI;
  if (1 > b->size[1]) {
    overflow = false;
  } else {
    overflow = (b->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= b->size[1]; k++) {
    n += b->data[k - 1];
  }

  return n;
}

void rfft(JenkinsCompareStackData *SD, const emlrtStack *sp, const real_T x
          [156672], emxArray_creal_T *y)
{
  real_T s[2];
  int32_T j;
  int32_T d_size[2];
  real_T d_data[1];
  real_T varargin_1;
  int32_T ypagesize;
  int32_T maxdimlen;
  real_T tmp_data[2];
  int32_T tmp_size[2];
  int32_T iy0;
  int32_T b_tmp_size[2];
  real_T varargin_3;
  emxArray_creal_T *b_y;
  const mxArray *c_y;
  static const int32_T iv7[2] = { 1, 40 };

  const mxArray *m1;
  char_T cv11[40];
  int32_T i;
  static const char_T cv12[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  int32_T k;
  emxArray_real_T *d_y;
  real_T b_tmp_data[1];
  int32_T s_size[2];
  boolean_T overflow;
  boolean_T exitg1;
  const mxArray *e_y;
  static const int32_T iv8[2] = { 1, 31 };

  char_T cv13[31];
  static const char_T cv14[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  emxArray_boolean_T *r2;
  int32_T b_size[2];
  boolean_T b_data[512];
  emxArray_boolean_T b_b_data;
  int32_T sz[3];
  const mxArray *f_y;
  emxArray_creal_T *g_y;
  int32_T xpagesize;
  int32_T npages;
  boolean_T b1;
  int16_T b_sz[2];
  uint32_T b_varargin_1[3];
  const mxArray *h_y;
  static const int32_T iv9[2] = { 1, 40 };

  boolean_T b2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* RFFT     Calculate the DFT of real data Y=(X,N,D) */
  /*  Data is truncated/padded to length N if specified. */
  /*    N even:	(N+2)/2 points are returned with */
  /*  			the first and last being real */
  /*    N odd:	(N+1)/2 points are returned with the */
  /*  			first being real */
  /*  In all cases fix(1+N/2) points are returned */
  /*  D is the dimension along which to do the DFT */
  /*       Copyright (C) Mike Brookes 1998 */
  /*       Version: $Id: rfft.m 713 2011-10-16 14:45:43Z dmb $ */
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
  for (j = 0; j < 2; j++) {
    s[j] = 512.0 + -206.0 * (real_T)j;
  }

  d_size[0] = 1;
  d_size[1] = 1;
  j = 0;
  while (j <= 0) {
    d_data[0] = 1.0;
    j = 1;
  }

  st.site = &j_emlrtRSI;
  fft(x, SD->f0.y);
  st.site = &k_emlrtRSI;
  varargin_1 = norm(d_data, d_size) - 1.0;
  if (1.0 > varargin_1) {
    ypagesize = 0;
  } else {
    j = (int32_T)emlrtIntegerCheckFastR2012b(varargin_1, &e_emlrtDCI, sp);
    ypagesize = emlrtDynamicBoundsCheckFastR2012b(j, 1, 2, &g_emlrtBCI, sp);
  }

  st.site = &k_emlrtRSI;
  varargin_1 = norm(d_data, d_size) + 1.0;
  if (varargin_1 > 2.0) {
    j = 0;
    maxdimlen = -1;
  } else {
    j = (int32_T)emlrtIntegerCheckFastR2012b(varargin_1, &d_emlrtDCI, sp);
    j = emlrtDynamicBoundsCheckFastR2012b(j, 1, 2, &f_emlrtBCI, sp) - 1;
    maxdimlen = 1;
  }

  tmp_size[0] = 1;
  tmp_size[1] = ypagesize;
  for (iy0 = 0; iy0 < ypagesize; iy0++) {
    tmp_data[iy0] = 512.0 + -206.0 * (real_T)iy0;
  }

  st.site = &k_emlrtRSI;
  varargin_1 = prod(&st, tmp_data, tmp_size);
  b_tmp_size[0] = 1;
  b_tmp_size[1] = (maxdimlen - j) + 1;
  ypagesize = maxdimlen - j;
  for (maxdimlen = 0; maxdimlen <= ypagesize; maxdimlen++) {
    tmp_data[maxdimlen] = 512.0 + -206.0 * (real_T)(j + maxdimlen);
  }

  st.site = &k_emlrtRSI;
  varargin_3 = prod(&st, tmp_data, b_tmp_size);
  st.site = &k_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d_st.site = &y_emlrtRSI;
  eml_assert_valid_size_arg(&d_st, varargin_1);
  d_st.site = &y_emlrtRSI;
  eml_assert_valid_size_arg(&d_st, varargin_3);
  if ((int32_T)varargin_1 > 156672) {
    b_st.site = &v_emlrtRSI;
    b_eml_error(&b_st);
  }

  if ((int32_T)varargin_3 > 156672) {
    b_st.site = &v_emlrtRSI;
    b_eml_error(&b_st);
  }

  b_emxInit_creal_T(&st, &b_y, 3, &f_emlrtRTEI, true);
  j = b_y->size[0] * b_y->size[1] * b_y->size[2];
  b_y->size[0] = (int32_T)varargin_1;
  b_y->size[1] = 512;
  b_y->size[2] = (int32_T)varargin_3;
  emxEnsureCapacity(&st, (emxArray__common *)b_y, j, (int32_T)sizeof(creal_T),
                    &g_emlrtRTEI);
  if (156672 == ((int32_T)varargin_1 << 9) * (int32_T)varargin_3) {
  } else {
    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    for (i = 0; i < 40; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m1, cv11);
    emlrtAssign(&c_y, m1);
    b_st.site = &ge_emlrtRSI;
    e_st.site = &we_emlrtRSI;
    error(&b_st, b_message(&e_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  for (k = 0; k < 156672; k++) {
    b_y->data[k] = SD->f0.y[k];
  }

  /* 1, 512, 306 */
  emxInit_real_T(sp, &d_y, 2, &f_emlrtRTEI, true);
  j = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)d_y, j, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  j = 0;
  while (j <= 0) {
    d_y->data[0] = 256.0;
    j = 1;
  }

  maxdimlen = d_y->size[1];
  ypagesize = d_y->size[0] * d_y->size[1];
  for (j = 0; j < ypagesize; j++) {
    b_tmp_data[j] = d_y->data[j];
  }

  b_tmp_data[0] = (int32_T)muDoubleScalarFloor(b_tmp_data[0]);
  for (j = 0; j < maxdimlen; j++) {
    s[0] = 1.0 + b_tmp_data[j];
  }

  /* 257, 306 */
  st.site = &l_emlrtRSI;
  s_size[0] = 1;
  s_size[1] = 1;
  j = 0;
  while (j <= 0) {
    d_data[0] = s[0];
    j = 1;
  }

  b_st.site = &l_emlrtRSI;
  varargin_1 = norm(d_data, s_size);
  j = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = (int32_T)muDoubleScalarFloor(512.0 - (varargin_1 + 1.0)) + 1;
  emxEnsureCapacity(&st, (emxArray__common *)d_y, j, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  ypagesize = (int32_T)muDoubleScalarFloor(512.0 - (varargin_1 + 1.0));
  for (j = 0; j <= ypagesize; j++) {
    d_y->data[d_y->size[0] * j] = (varargin_1 + 1.0) + (real_T)j;
  }

  b_st.site = &fb_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= d_y->size[1] - 1)) {
    if ((d_y->data[k] < 1.0) || ((int32_T)d_y->data[k] > 512) || (d_y->data[k]
         != muDoubleScalarFloor(d_y->data[k]))) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (overflow) {
  } else {
    e_y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 31; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 31, m1, cv13);
    emlrtAssign(&e_y, m1);
    c_st.site = &ie_emlrtRSI;
    f_st.site = &xe_emlrtRSI;
    error(&c_st, b_message(&f_st, e_y, &m_emlrtMCI), &n_emlrtMCI);
  }

  emxInit_boolean_T(&b_st, &r2, 2, &f_emlrtRTEI, true);
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  make_bitarray(&c_st, 512.0, d_y, r2);
  b_size[0] = 1;
  b_size[1] = r2->size[1];
  ypagesize = r2->size[0] * r2->size[1];
  emxFree_real_T(&d_y);
  for (j = 0; j < ypagesize; j++) {
    b_data[j] = r2->data[j];
  }

  emxFree_boolean_T(&r2);
  b_b_data.data = (boolean_T *)&b_data;
  b_b_data.size = (int32_T *)&b_size;
  b_b_data.allocatedSize = 512;
  b_b_data.numDimensions = 2;
  b_b_data.canFreeData = false;
  c_st.site = &ib_emlrtRSI;
  maxdimlen = num_true(&c_st, &b_b_data);
  for (j = 0; j < 3; j++) {
    sz[j] = b_y->size[j];
  }

  if (512 - maxdimlen <= 512) {
  } else {
    f_y = NULL;
    m1 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&f_y, m1);
    c_st.site = &he_emlrtRSI;
    error(&c_st, f_y, &o_emlrtMCI);
  }

  sz[1] = 512 - maxdimlen;
  for (j = 0; j < 3; j++) {
    emlrtNonNegativeCheckFastR2012b(sz[j], &f_emlrtDCI, &b_st);
  }

  b_emxInit_creal_T(&b_st, &g_y, 3, &i_emlrtRTEI, true);
  j = g_y->size[0] * g_y->size[1] * g_y->size[2];
  g_y->size[0] = sz[0];
  g_y->size[1] = 512 - maxdimlen;
  g_y->size[2] = sz[2];
  emxEnsureCapacity(&b_st, (emxArray__common *)g_y, j, (int32_T)sizeof(creal_T),
                    &h_emlrtRTEI);
  xpagesize = b_y->size[0] << 9;
  ypagesize = (512 - maxdimlen) * b_y->size[0];
  npages = 1;
  k = 3;
  while ((k > 2) && (b_y->size[2] == 1)) {
    k = 2;
  }

  maxdimlen = 3;
  while (maxdimlen <= k) {
    npages *= b_y->size[2];
    maxdimlen = 4;
  }

  c_st.site = &jb_emlrtRSI;
  if (1 > npages) {
    b1 = false;
  } else {
    b1 = (npages > 2147483646);
  }

  if (b1) {
    d_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 0; i + 1 <= npages; i++) {
    maxdimlen = i * xpagesize;
    iy0 = i * ypagesize;
    for (k = 0; k < 512; k++) {
      if (!b_data[k]) {
        c_st.site = &kb_emlrtRSI;
        if (1 > b_y->size[0]) {
          overflow = false;
        } else {
          overflow = (b_y->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &q_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (j = 0; j + 1 <= b_y->size[0]; j++) {
          g_y->data[iy0 + j] = b_y->data[maxdimlen + j];
        }

        iy0 += b_y->size[0];
      }

      maxdimlen += b_y->size[0];
    }
  }

  emxFree_creal_T(&b_y);

  /* second one is range of rows taken OUT [] DELETES rows specified */
  /* 1, 257, 306 */
  st.site = &m_emlrtRSI;
  ypagesize = g_y->size[0] * g_y->size[1] * g_y->size[2];
  b_st.site = &nb_emlrtRSI;
  b_eml_assert_valid_size_arg(&b_st, s);
  for (j = 0; j < 2; j++) {
    b_sz[j] = (int16_T)(int32_T)s[j];
  }

  for (j = 0; j < 3; j++) {
    b_varargin_1[j] = (uint32_T)g_y->size[j];
  }

  maxdimlen = (int32_T)b_varargin_1[0];
  for (iy0 = 0; iy0 < 2; iy0++) {
    if ((int32_T)b_varargin_1[iy0 + 1] > maxdimlen) {
      maxdimlen = (int32_T)b_varargin_1[iy0 + 1];
    }
  }

  if (ypagesize < maxdimlen) {
  } else {
    maxdimlen = ypagesize;
  }

  if (b_sz[0] > maxdimlen) {
    b_st.site = &v_emlrtRSI;
    b_eml_error(&b_st);
  }

  if (b_sz[1] > maxdimlen) {
    b_st.site = &v_emlrtRSI;
    b_eml_error(&b_st);
  }

  j = y->size[0] * y->size[1];
  y->size[0] = b_sz[0];
  y->size[1] = b_sz[1];
  emxEnsureCapacity(&st, (emxArray__common *)y, j, (int32_T)sizeof(creal_T),
                    &g_emlrtRTEI);
  if (ypagesize == b_sz[0] * b_sz[1]) {
  } else {
    h_y = NULL;
    m1 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 40; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m1, cv11);
    emlrtAssign(&h_y, m1);
    b_st.site = &ge_emlrtRSI;
    e_st.site = &we_emlrtRSI;
    error(&b_st, b_message(&e_st, h_y, &g_emlrtMCI), &h_emlrtMCI);
  }

  b_st.site = &ob_emlrtRSI;
  if (1 > ypagesize) {
    b2 = false;
  } else {
    b2 = (ypagesize > 2147483646);
  }

  if (b2) {
    c_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= ypagesize; k++) {
    y->data[k] = g_y->data[k];
  }

  emxFree_creal_T(&g_y);

  /* 257, 306 */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (rfft.c) */
