/*
 * fft.c
 *
 * Code generation for function 'fft'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "fft.h"
#include "JenkinsCompare_emxutil.h"
#include "melcepst.h"
#include "eml_int_forloop_overflow_check.h"
#include "JenkinsCompare_mexutil.h"
#include "JenkinsCompare_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 14, "fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\fft.m"
};

static emlrtRSInfo o_emlrtRSI = { 49, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo p_emlrtRSI = { 113, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo cd_emlrtRSI = { 88, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo dd_emlrtRSI = { 90, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo ed_emlrtRSI = { 95, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo fd_emlrtRSI = { 100, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtMCInfo jb_emlrtMCI = { 23, 9, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtMCInfo kb_emlrtMCI = { 20, 19, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtMCInfo lb_emlrtMCI = { 33, 9, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtMCInfo mb_emlrtMCI = { 32, 19, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 66, 1, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 1, 14, "fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\fft.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 238, 1, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 260, 1, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 261, 1, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 88, 5, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo qd_emlrtRSI = { 32, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo rd_emlrtRSI = { 20, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo oe_emlrtRSI = { 33, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo pe_emlrtRSI = { 23, "eml_fft",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_fft.m"
};

static emlrtRSInfo df_emlrtRSI = { 18, "indexDivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\indexDivide.m"
};

/* Function Declarations */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

void b_fft(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_creal_T *y)
{
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv28[2] = { 1, 36 };

  const mxArray *m8;
  char_T cv37[36];
  int32_T i;
  static const char_T cv38[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv29[2] = { 1, 38 };

  char_T cv39[38];
  static const char_T cv40[38] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'f', 'f', 't', '_', 's', 'i',
    'z', 'e', 'M', 'u', 's', 't', 'B', 'e', 'P', 'o', 'w', 'e', 'r', '2' };

  uint32_T sz[2];
  int32_T ju;
  int32_T minval;
  emxArray_real_T *costab1q;
  int32_T nd2;
  int32_T ixDelta;
  int32_T nRowsD2;
  int32_T nRowsD4;
  int32_T lastChan;
  real_T e;
  int32_T k;
  emxArray_real_T *costab;
  emxArray_real_T *sintab;
  int32_T ix;
  int32_T chanStart;
  boolean_T b_chanStart;
  real_T temp_re;
  real_T temp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T iheight;
  int32_T ihi;
  real_T twid_im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &n_emlrtRSI;
  overflow = (x->size[0] != 1);
  if (overflow) {
  } else {
    b_y = NULL;
    m8 = emlrtCreateCharArray(2, iv28);
    for (i = 0; i < 36; i++) {
      cv37[i] = cv38[i];
    }

    emlrtInitCharArrayR2013a(&st, 36, m8, cv37);
    emlrtAssign(&b_y, m8);
    b_st.site = &rd_emlrtRSI;
    c_st.site = &pe_emlrtRSI;
    error(&b_st, b_message(&c_st, b_y, &jb_emlrtMCI), &kb_emlrtMCI);
  }

  if (x->size[0] <= 0) {
    overflow = false;
  } else {
    overflow = ((x->size[0] & (x->size[0] - 1)) == 0);
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m8 = emlrtCreateCharArray(2, iv29);
    for (i = 0; i < 38; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(&st, 38, m8, cv39);
    emlrtAssign(&c_y, m8);
    b_st.site = &qd_emlrtRSI;
    c_st.site = &oe_emlrtRSI;
    error(&b_st, b_message(&c_st, c_y, &lb_emlrtMCI), &mb_emlrtMCI);
  }

  b_st.site = &o_emlrtRSI;
  for (ju = 0; ju < 2; ju++) {
    sz[ju] = (uint32_T)x->size[ju];
  }

  ju = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, ju, (int32_T)sizeof(creal_T),
                    &ab_emlrtRTEI);
  if (x->size[0] == 0) {
  } else {
    minval = x->size[0];
    emxInit_real_T(&b_st, &costab1q, 2, &fb_emlrtRTEI, true);
    nd2 = (x->size[0] - minval) + 1;
    ixDelta = muIntScalarMax_sint32(1, nd2);
    ju = x->size[0];
    ju += (ju < 0);
    if (ju >= 0) {
      nRowsD2 = (int32_T)((uint32_T)ju >> 1);
    } else {
      nRowsD2 = ~(int32_T)((uint32_T)~ju >> 1);
    }

    ju = nRowsD2 + (nRowsD2 < 0);
    if (ju >= 0) {
      nRowsD4 = (int32_T)((uint32_T)ju >> 1);
    } else {
      nRowsD4 = ~(int32_T)((uint32_T)~ju >> 1);
    }

    d_st.site = &df_emlrtRSI;
    lastChan = x->size[0] * (div_s32(&d_st, x->size[0] * x->size[1], x->size[0])
      - 1);
    e = 6.2831853071795862 / (real_T)x->size[0];
    d_st.site = &cd_emlrtRSI;
    ju = costab1q->size[0] * costab1q->size[1];
    costab1q->size[0] = 1;
    costab1q->size[1] = nRowsD4 + 1;
    emxEnsureCapacity(&d_st, (emxArray__common *)costab1q, ju, (int32_T)sizeof
                      (real_T), &cb_emlrtRTEI);
    costab1q->data[0] = 1.0;
    ju = nRowsD4 + (nRowsD4 < 0);
    if (ju >= 0) {
      nd2 = (int32_T)((uint32_T)ju >> 1);
    } else {
      nd2 = ~(int32_T)((uint32_T)~ju >> 1);
    }

    for (k = 1; k <= nd2; k++) {
      costab1q->data[k] = muDoubleScalarCos(e * (real_T)k);
    }

    for (k = nd2 + 1; k < nRowsD4; k++) {
      costab1q->data[k] = muDoubleScalarSin(e * (real_T)(nRowsD4 - k));
    }

    emxInit_real_T(&d_st, &costab, 2, &bb_emlrtRTEI, true);
    emxInit_real_T(&d_st, &sintab, 2, &bb_emlrtRTEI, true);
    costab1q->data[nRowsD4] = 0.0;
    d_st.site = &dd_emlrtRSI;
    nd2 = (costab1q->size[1] - 1) << 1;
    ju = costab->size[0] * costab->size[1];
    costab->size[0] = 1;
    costab->size[1] = nd2 + 1;
    emxEnsureCapacity(&d_st, (emxArray__common *)costab, ju, (int32_T)sizeof
                      (real_T), &db_emlrtRTEI);
    ju = sintab->size[0] * sintab->size[1];
    sintab->size[0] = 1;
    sintab->size[1] = nd2 + 1;
    emxEnsureCapacity(&d_st, (emxArray__common *)sintab, ju, (int32_T)sizeof
                      (real_T), &eb_emlrtRTEI);
    costab->data[0] = 1.0;
    sintab->data[0] = 0.0;
    for (k = 1; k < costab1q->size[1]; k++) {
      costab->data[k] = costab1q->data[k];
      sintab->data[k] = -costab1q->data[(costab1q->size[1] - k) - 1];
    }

    for (k = costab1q->size[1]; k <= nd2; k++) {
      costab->data[k] = -costab1q->data[nd2 - k];
      sintab->data[k] = -costab1q->data[(k - costab1q->size[1]) + 1];
    }

    emxFree_real_T(&costab1q);
    ix = 0;
    d_st.site = &ed_emlrtRSI;
    if (0 > lastChan) {
      overflow = false;
    } else {
      overflow = (lastChan > MAX_int32_T - x->size[0]);
    }

    if (overflow) {
      e_st.site = &q_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (chanStart = 0; chanStart <= lastChan; chanStart += x->size[0]) {
      ju = 0;
      nd2 = chanStart;
      d_st.site = &fd_emlrtRSI;
      for (i = 1; i < minval; i++) {
        y->data[nd2] = x->data[ix];
        nd2 = x->size[0];
        overflow = true;
        while (overflow) {
          if (nd2 >= 0) {
            nd2 = (int32_T)((uint32_T)nd2 >> 1);
          } else {
            nd2 = ~(int32_T)((uint32_T)~nd2 >> 1);
          }

          ju ^= nd2;
          overflow = ((ju & nd2) == 0);
        }

        nd2 = chanStart + ju;
        ix++;
      }

      y->data[nd2] = x->data[ix];
      ix += ixDelta;
      nd2 = (chanStart + x->size[0]) - 2;
      if (x->size[0] > 1) {
        d_st.site = &p_emlrtRSI;
        if (chanStart > nd2) {
          b_chanStart = false;
        } else {
          b_chanStart = (nd2 > 2147483645);
        }

        if (b_chanStart) {
          e_st.site = &q_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (i = chanStart; i <= nd2; i += 2) {
          temp_re = y->data[i + 1].re;
          temp_im = y->data[i + 1].im;
          y->data[i + 1].re = y->data[i].re - y->data[i + 1].re;
          y->data[i + 1].im = y->data[i].im - y->data[i + 1].im;
          y->data[i].re += temp_re;
          y->data[i].im += temp_im;
        }
      }

      iDelta = 2;
      iDelta2 = 4;
      k = nRowsD4;
      iheight = 1 + ((nRowsD4 - 1) << 2);
      while (k > 0) {
        i = chanStart;
        ihi = chanStart + iheight;
        while (i < ihi) {
          nd2 = i + iDelta;
          temp_re = y->data[nd2].re;
          temp_im = y->data[nd2].im;
          y->data[i + iDelta].re = y->data[i].re - y->data[nd2].re;
          y->data[i + iDelta].im = y->data[i].im - y->data[nd2].im;
          y->data[i].re += temp_re;
          y->data[i].im += temp_im;
          i += iDelta2;
        }

        nd2 = chanStart + 1;
        for (ju = k; ju < nRowsD2; ju += k) {
          e = costab->data[ju];
          twid_im = sintab->data[ju];
          i = nd2;
          ihi = nd2 + iheight;
          while (i < ihi) {
            temp_re = e * y->data[i + iDelta].re - twid_im * y->data[i + iDelta]
              .im;
            temp_im = e * y->data[i + iDelta].im + twid_im * y->data[i + iDelta]
              .re;
            y->data[i + iDelta].re = y->data[i].re - temp_re;
            y->data[i + iDelta].im = y->data[i].im - temp_im;
            y->data[i].re += temp_re;
            y->data[i].im += temp_im;
            i += iDelta2;
          }

          nd2++;
        }

        ju = k;
        k = (int32_T)((uint32_T)ju >> 1);
        iDelta = iDelta2;
        iDelta2 <<= 1;
        iheight -= iDelta;
      }
    }

    emxFree_real_T(&sintab);
    emxFree_real_T(&costab);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void fft(const real_T x[156672], creal_T y[156672])
{
  int32_T ix;
  int32_T chanStart;
  int32_T ju;
  int32_T iy;
  int32_T i;
  boolean_T tst;
  real_T temp_re;
  real_T temp_im;
  int32_T iDelta;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv3[257] = { 0.0, -0.012271538285719925,
    -0.024541228522912288, -0.036807222941358832, -0.049067674327418015,
    -0.061320736302208578, -0.073564563599667426, -0.0857973123444399,
    -0.0980171403295606, -0.11022220729388306, -0.1224106751992162,
    -0.13458070850712617, -0.14673047445536175, -0.15885814333386145,
    -0.17096188876030122, -0.18303988795514095, -0.19509032201612825,
    -0.20711137619221856, -0.2191012401568698, -0.23105810828067111,
    -0.24298017990326387, -0.25486565960451457, -0.26671275747489837,
    -0.27851968938505306, -0.29028467725446233, -0.30200594931922808,
    -0.31368174039889152, -0.32531029216226293, -0.33688985339222005,
    -0.34841868024943456, -0.35989503653498811, -0.37131719395183749,
    -0.38268343236508978, -0.3939920400610481, -0.40524131400498986,
    -0.41642956009763715, -0.42755509343028208, -0.43861623853852766,
    -0.44961132965460654, -0.46053871095824, -0.47139673682599764,
    -0.48218377207912272, -0.49289819222978404, -0.50353838372571758,
    -0.51410274419322166, -0.524589682678469, -0.53499761988709715,
    -0.54532498842204646, -0.55557023301960218, -0.56573181078361312,
    -0.57580819141784534, -0.58579785745643886, -0.59569930449243336,
    -0.60551104140432555, -0.61523159058062682, -0.62485948814238634,
    -0.63439328416364549, -0.64383154288979139, -0.65317284295377676,
    -0.66241577759017178, -0.67155895484701833, -0.680600997795453,
    -0.68954054473706683, -0.69837624940897292, -0.70710678118654757,
    -0.71573082528381859, -0.724247082951467, -0.73265427167241282,
    -0.74095112535495922, -0.74913639452345937, -0.75720884650648457,
    -0.765167265622459, -0.773010453362737, -0.78073722857209449,
    -0.78834642762660634, -0.79583690460888357, -0.80320753148064494,
    -0.81045719825259477, -0.81758481315158371, -0.82458930278502529,
    -0.83146961230254524, -0.83822470555483808, -0.84485356524970712,
    -0.8513551931052652, -0.85772861000027212, -0.8639728561215867,
    -0.87008699110871146, -0.8760700941954066, -0.881921264348355,
    -0.88763962040285393, -0.89322430119551532, -0.89867446569395382,
    -0.90398929312344334, -0.90916798309052238, -0.91420975570353069,
    -0.91911385169005777, -0.92387953251128674, -0.92850608047321559,
    -0.932992798834739, -0.937339011912575, -0.94154406518302081,
    -0.94560732538052128, -0.94952818059303667, -0.95330604035419386,
    -0.95694033573220882, -0.96043051941556579, -0.96377606579543984,
    -0.96697647104485207, -0.970031253194544, -0.97293995220556018,
    -0.97570213003852857, -0.97831737071962765, -0.98078528040323043,
    -0.98310548743121629, -0.98527764238894122, -0.98730141815785843,
    -0.989176509964781, -0.99090263542778, -0.99247953459871,
    -0.99390697000235606, -0.99518472667219693, -0.996312612182778,
    -0.99729045667869021, -0.99811811290014918, -0.99879545620517241,
    -0.99932238458834954, -0.99969881869620425, -0.9999247018391445, -1.0,
    -0.9999247018391445, -0.99969881869620425, -0.99932238458834954,
    -0.99879545620517241, -0.99811811290014918, -0.99729045667869021,
    -0.996312612182778, -0.99518472667219693, -0.99390697000235606,
    -0.99247953459871, -0.99090263542778, -0.989176509964781,
    -0.98730141815785843, -0.98527764238894122, -0.98310548743121629,
    -0.98078528040323043, -0.97831737071962765, -0.97570213003852857,
    -0.97293995220556018, -0.970031253194544, -0.96697647104485207,
    -0.96377606579543984, -0.96043051941556579, -0.95694033573220882,
    -0.95330604035419386, -0.94952818059303667, -0.94560732538052128,
    -0.94154406518302081, -0.937339011912575, -0.932992798834739,
    -0.92850608047321559, -0.92387953251128674, -0.91911385169005777,
    -0.91420975570353069, -0.90916798309052238, -0.90398929312344334,
    -0.89867446569395382, -0.89322430119551532, -0.88763962040285393,
    -0.881921264348355, -0.8760700941954066, -0.87008699110871146,
    -0.8639728561215867, -0.85772861000027212, -0.8513551931052652,
    -0.84485356524970712, -0.83822470555483808, -0.83146961230254524,
    -0.82458930278502529, -0.81758481315158371, -0.81045719825259477,
    -0.80320753148064494, -0.79583690460888357, -0.78834642762660634,
    -0.78073722857209449, -0.773010453362737, -0.765167265622459,
    -0.75720884650648457, -0.74913639452345937, -0.74095112535495922,
    -0.73265427167241282, -0.724247082951467, -0.71573082528381859,
    -0.70710678118654757, -0.69837624940897292, -0.68954054473706683,
    -0.680600997795453, -0.67155895484701833, -0.66241577759017178,
    -0.65317284295377676, -0.64383154288979139, -0.63439328416364549,
    -0.62485948814238634, -0.61523159058062682, -0.60551104140432555,
    -0.59569930449243336, -0.58579785745643886, -0.57580819141784534,
    -0.56573181078361312, -0.55557023301960218, -0.54532498842204646,
    -0.53499761988709715, -0.524589682678469, -0.51410274419322166,
    -0.50353838372571758, -0.49289819222978404, -0.48218377207912272,
    -0.47139673682599764, -0.46053871095824, -0.44961132965460654,
    -0.43861623853852766, -0.42755509343028208, -0.41642956009763715,
    -0.40524131400498986, -0.3939920400610481, -0.38268343236508978,
    -0.37131719395183749, -0.35989503653498811, -0.34841868024943456,
    -0.33688985339222005, -0.32531029216226293, -0.31368174039889152,
    -0.30200594931922808, -0.29028467725446233, -0.27851968938505306,
    -0.26671275747489837, -0.25486565960451457, -0.24298017990326387,
    -0.23105810828067111, -0.2191012401568698, -0.20711137619221856,
    -0.19509032201612825, -0.18303988795514095, -0.17096188876030122,
    -0.15885814333386145, -0.14673047445536175, -0.13458070850712617,
    -0.1224106751992162, -0.11022220729388306, -0.0980171403295606,
    -0.0857973123444399, -0.073564563599667426, -0.061320736302208578,
    -0.049067674327418015, -0.036807222941358832, -0.024541228522912288,
    -0.012271538285719925, -0.0 };

  static const real_T dv4[257] = { 1.0, 0.9999247018391445, 0.99969881869620425,
    0.99932238458834954, 0.99879545620517241, 0.99811811290014918,
    0.99729045667869021, 0.996312612182778, 0.99518472667219693,
    0.99390697000235606, 0.99247953459871, 0.99090263542778, 0.989176509964781,
    0.98730141815785843, 0.98527764238894122, 0.98310548743121629,
    0.98078528040323043, 0.97831737071962765, 0.97570213003852857,
    0.97293995220556018, 0.970031253194544, 0.96697647104485207,
    0.96377606579543984, 0.96043051941556579, 0.95694033573220882,
    0.95330604035419386, 0.94952818059303667, 0.94560732538052128,
    0.94154406518302081, 0.937339011912575, 0.932992798834739,
    0.92850608047321559, 0.92387953251128674, 0.91911385169005777,
    0.91420975570353069, 0.90916798309052238, 0.90398929312344334,
    0.89867446569395382, 0.89322430119551532, 0.88763962040285393,
    0.881921264348355, 0.8760700941954066, 0.87008699110871146,
    0.8639728561215867, 0.85772861000027212, 0.8513551931052652,
    0.84485356524970712, 0.83822470555483808, 0.83146961230254524,
    0.82458930278502529, 0.81758481315158371, 0.81045719825259477,
    0.80320753148064494, 0.79583690460888357, 0.78834642762660634,
    0.78073722857209449, 0.773010453362737, 0.765167265622459,
    0.75720884650648457, 0.74913639452345937, 0.74095112535495922,
    0.73265427167241282, 0.724247082951467, 0.71573082528381859,
    0.70710678118654757, 0.69837624940897292, 0.68954054473706683,
    0.680600997795453, 0.67155895484701833, 0.66241577759017178,
    0.65317284295377676, 0.64383154288979139, 0.63439328416364549,
    0.62485948814238634, 0.61523159058062682, 0.60551104140432555,
    0.59569930449243336, 0.58579785745643886, 0.57580819141784534,
    0.56573181078361312, 0.55557023301960218, 0.54532498842204646,
    0.53499761988709715, 0.524589682678469, 0.51410274419322166,
    0.50353838372571758, 0.49289819222978404, 0.48218377207912272,
    0.47139673682599764, 0.46053871095824, 0.44961132965460654,
    0.43861623853852766, 0.42755509343028208, 0.41642956009763715,
    0.40524131400498986, 0.3939920400610481, 0.38268343236508978,
    0.37131719395183749, 0.35989503653498811, 0.34841868024943456,
    0.33688985339222005, 0.32531029216226293, 0.31368174039889152,
    0.30200594931922808, 0.29028467725446233, 0.27851968938505306,
    0.26671275747489837, 0.25486565960451457, 0.24298017990326387,
    0.23105810828067111, 0.2191012401568698, 0.20711137619221856,
    0.19509032201612825, 0.18303988795514095, 0.17096188876030122,
    0.15885814333386145, 0.14673047445536175, 0.13458070850712617,
    0.1224106751992162, 0.11022220729388306, 0.0980171403295606,
    0.0857973123444399, 0.073564563599667426, 0.061320736302208578,
    0.049067674327418015, 0.036807222941358832, 0.024541228522912288,
    0.012271538285719925, 0.0, -0.012271538285719925, -0.024541228522912288,
    -0.036807222941358832, -0.049067674327418015, -0.061320736302208578,
    -0.073564563599667426, -0.0857973123444399, -0.0980171403295606,
    -0.11022220729388306, -0.1224106751992162, -0.13458070850712617,
    -0.14673047445536175, -0.15885814333386145, -0.17096188876030122,
    -0.18303988795514095, -0.19509032201612825, -0.20711137619221856,
    -0.2191012401568698, -0.23105810828067111, -0.24298017990326387,
    -0.25486565960451457, -0.26671275747489837, -0.27851968938505306,
    -0.29028467725446233, -0.30200594931922808, -0.31368174039889152,
    -0.32531029216226293, -0.33688985339222005, -0.34841868024943456,
    -0.35989503653498811, -0.37131719395183749, -0.38268343236508978,
    -0.3939920400610481, -0.40524131400498986, -0.41642956009763715,
    -0.42755509343028208, -0.43861623853852766, -0.44961132965460654,
    -0.46053871095824, -0.47139673682599764, -0.48218377207912272,
    -0.49289819222978404, -0.50353838372571758, -0.51410274419322166,
    -0.524589682678469, -0.53499761988709715, -0.54532498842204646,
    -0.55557023301960218, -0.56573181078361312, -0.57580819141784534,
    -0.58579785745643886, -0.59569930449243336, -0.60551104140432555,
    -0.61523159058062682, -0.62485948814238634, -0.63439328416364549,
    -0.64383154288979139, -0.65317284295377676, -0.66241577759017178,
    -0.67155895484701833, -0.680600997795453, -0.68954054473706683,
    -0.69837624940897292, -0.70710678118654757, -0.71573082528381859,
    -0.724247082951467, -0.73265427167241282, -0.74095112535495922,
    -0.74913639452345937, -0.75720884650648457, -0.765167265622459,
    -0.773010453362737, -0.78073722857209449, -0.78834642762660634,
    -0.79583690460888357, -0.80320753148064494, -0.81045719825259477,
    -0.81758481315158371, -0.82458930278502529, -0.83146961230254524,
    -0.83822470555483808, -0.84485356524970712, -0.8513551931052652,
    -0.85772861000027212, -0.8639728561215867, -0.87008699110871146,
    -0.8760700941954066, -0.881921264348355, -0.88763962040285393,
    -0.89322430119551532, -0.89867446569395382, -0.90398929312344334,
    -0.90916798309052238, -0.91420975570353069, -0.91911385169005777,
    -0.92387953251128674, -0.92850608047321559, -0.932992798834739,
    -0.937339011912575, -0.94154406518302081, -0.94560732538052128,
    -0.94952818059303667, -0.95330604035419386, -0.95694033573220882,
    -0.96043051941556579, -0.96377606579543984, -0.96697647104485207,
    -0.970031253194544, -0.97293995220556018, -0.97570213003852857,
    -0.97831737071962765, -0.98078528040323043, -0.98310548743121629,
    -0.98527764238894122, -0.98730141815785843, -0.989176509964781,
    -0.99090263542778, -0.99247953459871, -0.99390697000235606,
    -0.99518472667219693, -0.996312612182778, -0.99729045667869021,
    -0.99811811290014918, -0.99879545620517241, -0.99932238458834954,
    -0.99969881869620425, -0.9999247018391445, -1.0 };

  ix = 0;
  for (chanStart = 0; chanStart < 156162; chanStart += 512) {
    ju = 0;
    iy = chanStart;
    for (i = 0; i < 511; i++) {
      y[iy].re = x[ix];
      y[iy].im = 0.0;
      iy = 512;
      tst = true;
      while (tst) {
        if (iy >= 0) {
          iy = (int32_T)((uint32_T)iy >> 1);
        } else {
          iy = ~(int32_T)((uint32_T)~iy >> 1);
        }

        ju ^= iy;
        tst = ((ju & iy) == 0);
      }

      iy = chanStart + ju;
      ix++;
    }

    y[iy].re = x[ix];
    y[iy].im = 0.0;
    ix++;
    for (i = chanStart; i <= chanStart + 510; i += 2) {
      temp_re = y[i + 1].re;
      temp_im = y[i + 1].im;
      y[i + 1].re = y[i].re - y[i + 1].re;
      y[i + 1].im = y[i].im - y[i + 1].im;
      y[i].re += temp_re;
      y[i].im += temp_im;
    }

    iDelta = 2;
    iDelta2 = 4;
    k = 128;
    iheight = 509;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        iy = i + iDelta;
        temp_re = y[iy].re;
        temp_im = y[iy].im;
        y[i + iDelta].re = y[i].re - y[iy].re;
        y[i + iDelta].im = y[i].im - y[iy].im;
        y[i].re += temp_re;
        y[i].im += temp_im;
        i += iDelta2;
      }

      iy = chanStart + 1;
      for (ju = k; ju < 256; ju += k) {
        i = iy;
        ihi = iy + iheight;
        while (i < ihi) {
          temp_re = dv4[ju] * y[i + iDelta].re - dv3[ju] * y[i + iDelta].im;
          temp_im = dv4[ju] * y[i + iDelta].im + dv3[ju] * y[i + iDelta].re;
          y[i + iDelta].re = y[i].re - temp_re;
          y[i + iDelta].im = y[i].im - temp_im;
          y[i].re += temp_re;
          y[i].im += temp_im;
          i += iDelta2;
        }

        iy++;
      }

      iy = k;
      k = (int32_T)((uint32_T)iy >> 1);
      iDelta = iDelta2;
      iDelta2 <<= 1;
      iheight -= iDelta;
    }
  }
}

/* End of code generation (fft.c) */
