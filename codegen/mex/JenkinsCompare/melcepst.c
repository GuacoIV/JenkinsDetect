/*
 * melcepst.c
 *
 * Code generation for function 'melcepst'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "melcepst.h"
#include "norm.h"
#include "abs.h"
#include "JenkinsCompare_emxutil.h"
#include "rfft.h"
#include "rdct.h"
#include "log.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "melbankm.h"
#include "enframe.h"
#include "JenkinsCompare_mexutil.h"
#include "JenkinsCompare_data.h"

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 99, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo d_emlrtRSI = { 100, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo e_emlrtRSI = { 101, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo f_emlrtRSI = { 102, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo g_emlrtRSI = { 110, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo h_emlrtRSI = { 113, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo i_emlrtRSI = { 124, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRSInfo tc_emlrtRSI = { 68, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo uc_emlrtRSI = { 21, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo vc_emlrtRSI = { 54, "eml_xgemm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgemm.m"
};

static emlrtRSInfo wc_emlrtRSI = { 1, "xgemm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p"
};

static emlrtRSInfo xc_emlrtRSI = { 59, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo yc_emlrtRSI = { 129, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo kd_emlrtRSI = { 18, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ld_emlrtRSI = { 19, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo md_emlrtRSI = { 208, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo nd_emlrtRSI = { 209, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo fb_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo gb_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo hb_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo ib_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtMCInfo nb_emlrtMCI = { 231, 1, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 12, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

static emlrtRTEInfo c_emlrtRTEI = { 99, 1, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 101, 1, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 117, 4, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 1, 1, "", "xgemm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgemm.p",
  0 };

static emlrtECInfo emlrtECI = { 1, 119, 10, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 117, 15, "c", "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 110, 22, "f", "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  0 };

static emlrtDCInfo emlrtDCI = { 110, 22, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  1 };

static emlrtECInfo b_emlrtECI = { 2, 101, 4, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 101, 27, "f", "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 101, 27, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 101, 6, "f", "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 101, 6, "melcepst",
  "C:\\Users\\Edward\\OneDrive\\LSU\\Senior Year\\EE 4810 - Senior Design I\\Audio\\Noise Removed\\melcepst.m",
  1 };

static emlrtRSInfo je_emlrtRSI = { 231, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ke_emlrtRSI = { 98, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo le_emlrtRSI = { 103, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo ye_emlrtRSI = { 99, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

static emlrtRSInfo af_emlrtRSI = { 104, "eml_mtimes_helper",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"
};

/* Function Declarations */
static boolean_T b_eml_relop(real_T a, const creal_T b);
static boolean_T eml_relop(const creal_T a, const creal_T b);

/* Function Definitions */
static boolean_T b_eml_relop(real_T a, const creal_T b)
{
  boolean_T p;
  real_T absar;
  real_T absbr;
  real_T absxk;
  int32_T exponent;
  real_T Ma;
  real_T Mb;
  int32_T b_exponent;
  int32_T c_exponent;
  int32_T d_exponent;
  if ((muDoubleScalarAbs(a) > 8.9884656743115785E+307) || (muDoubleScalarAbs
       (b.re) > 8.9884656743115785E+307) || (muDoubleScalarAbs(b.im) >
       8.9884656743115785E+307)) {
    absar = muDoubleScalarAbs(a) / 2.0;
    absbr = muDoubleScalarHypot(b.re / 2.0, b.im / 2.0);
  } else {
    absar = muDoubleScalarAbs(a);
    absbr = muDoubleScalarHypot(b.re, b.im);
  }

  absxk = absbr / 2.0;
  if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
    if (absxk <= 2.2250738585072014E-308) {
      absxk = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      absxk = ldexp(1.0, exponent - 53);
    }
  } else {
    absxk = rtNaN;
  }

  if ((muDoubleScalarAbs(absbr - absar) < absxk) || (muDoubleScalarIsInf(absar) &&
       muDoubleScalarIsInf(absbr) && ((absar > 0.0) == (absbr > 0.0)))) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    absar = muDoubleScalarAbs(a);
    absbr = muDoubleScalarAbs(b.re);
    absxk = muDoubleScalarAbs(b.im);
    if (absar > 0.0) {
      Ma = absar;
      absar = 0.0;
    } else {
      Ma = 0.0;
    }

    if (absbr > absxk) {
      Mb = absbr;
      absbr = absxk;
    } else {
      Mb = absxk;
    }

    if (Ma > Mb) {
      if (absar < absbr) {
        absar = Ma - Mb;
        absbr *= absbr / 2.0 / (Ma / 2.0 + Mb / 2.0);
      } else {
        absar = Ma;
        absbr = Mb;
      }
    } else {
      if (Ma < Mb) {
        absar = Ma;
        absbr = Mb;
      }
    }

    absxk = muDoubleScalarAbs(absbr / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &b_exponent);
        absxk = ldexp(1.0, b_exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(absbr - absar) < absxk) || (muDoubleScalarIsInf(absar)
         && muDoubleScalarIsInf(absbr) && ((absar > 0.0) == (absbr > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      absar = muDoubleScalarAtan2(0.0, a);
      absbr = muDoubleScalarAtan2(b.im, b.re);
      absxk = muDoubleScalarAbs(absbr / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &c_exponent);
          absxk = ldexp(1.0, c_exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((muDoubleScalarAbs(absbr - absar) < absxk) || (muDoubleScalarIsInf
           (absar) && muDoubleScalarIsInf(absbr) && ((absar > 0.0) == (absbr >
             0.0)))) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        if (absar > 0.78539816339744828) {
          if (absar > 2.3561944901923448) {
            absar = -0.0;
            absbr = -b.im;
          } else {
            absar = -a;
            absbr = -b.re;
          }
        } else if (absar > -0.78539816339744828) {
          absar = 0.0;
          absbr = b.im;
        } else if (absar > -2.3561944901923448) {
          absar = a;
          absbr = b.re;
        } else {
          absar = -0.0;
          absbr = -b.im;
        }

        absxk = muDoubleScalarAbs(absbr / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &d_exponent);
            absxk = ldexp(1.0, d_exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((muDoubleScalarAbs(absbr - absar) < absxk) || (muDoubleScalarIsInf
             (absar) && muDoubleScalarIsInf(absbr) && ((absar > 0.0) == (absbr >
               0.0)))) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          absar = 0.0;
          absbr = 0.0;
        }
      }
    }
  }

  return absar < absbr;
}

static boolean_T eml_relop(const creal_T a, const creal_T b)
{
  boolean_T p;
  real_T absbi;
  real_T y;
  real_T absxk;
  int32_T exponent;
  real_T absar;
  real_T absbr;
  real_T Ma;
  int32_T b_exponent;
  int32_T c_exponent;
  int32_T d_exponent;
  if ((muDoubleScalarAbs(a.re) > 8.9884656743115785E+307) || (muDoubleScalarAbs
       (a.im) > 8.9884656743115785E+307) || (muDoubleScalarAbs(b.re) >
       8.9884656743115785E+307) || (muDoubleScalarAbs(b.im) >
       8.9884656743115785E+307)) {
    absbi = muDoubleScalarHypot(a.re / 2.0, a.im / 2.0);
    y = muDoubleScalarHypot(b.re / 2.0, b.im / 2.0);
  } else {
    absbi = muDoubleScalarHypot(a.re, a.im);
    y = muDoubleScalarHypot(b.re, b.im);
  }

  absxk = y / 2.0;
  if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
    if (absxk <= 2.2250738585072014E-308) {
      absxk = 4.94065645841247E-324;
    } else {
      frexp(absxk, &exponent);
      absxk = ldexp(1.0, exponent - 53);
    }
  } else {
    absxk = rtNaN;
  }

  if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
       muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
    absar = muDoubleScalarAbs(a.re);
    absxk = muDoubleScalarAbs(a.im);
    absbr = muDoubleScalarAbs(b.re);
    absbi = muDoubleScalarAbs(b.im);
    if (absar > absxk) {
      Ma = absar;
      absar = absxk;
    } else {
      Ma = absxk;
    }

    if (absbr > absbi) {
      absxk = absbr;
      absbr = absbi;
    } else {
      absxk = absbi;
    }

    if (Ma > absxk) {
      if (absar < absbr) {
        absbi = Ma - absxk;
        y = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) * (absbr -
          absar);
      } else {
        absbi = Ma;
        y = absxk;
      }
    } else if (Ma < absxk) {
      if (absar > absbr) {
        y = absxk - Ma;
        absbi = (absar / 2.0 + absbr / 2.0) / (Ma / 2.0 + absxk / 2.0) * (absar
          - absbr);
      } else {
        absbi = Ma;
        y = absxk;
      }
    } else {
      absbi = absar;
      y = absbr;
    }

    absxk = muDoubleScalarAbs(y / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &b_exponent);
        absxk = ldexp(1.0, b_exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
         muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      absbi = muDoubleScalarAtan2(a.im, a.re);
      y = muDoubleScalarAtan2(b.im, b.re);
      absxk = muDoubleScalarAbs(y / 2.0);
      if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &c_exponent);
          absxk = ldexp(1.0, c_exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi) &&
           muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        if (absbi > 0.78539816339744828) {
          if (absbi > 2.3561944901923448) {
            absbi = -a.im;
            y = -b.im;
          } else {
            absbi = -a.re;
            y = -b.re;
          }
        } else if (absbi > -0.78539816339744828) {
          absbi = a.im;
          y = b.im;
        } else if (absbi > -2.3561944901923448) {
          absbi = a.re;
          y = b.re;
        } else {
          absbi = -a.im;
          y = -b.im;
        }

        absxk = muDoubleScalarAbs(y / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &d_exponent);
            absxk = ldexp(1.0, d_exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((muDoubleScalarAbs(y - absbi) < absxk) || (muDoubleScalarIsInf(absbi)
             && muDoubleScalarIsInf(y) && ((absbi > 0.0) == (y > 0.0)))) {
          p = true;
        } else {
          p = false;
        }

        if (p) {
          absbi = 0.0;
          y = 0.0;
        }
      }
    }
  }

  return absbi > y;
}

void melcepst(JenkinsCompareStackData *SD, const emlrtStack *sp, const real_T s
              [78596], real_T fs, real_T p, emxArray_real_T *c)
{
  static const real_T dv1[512] = { 0.080000000000000016, 0.080034772851092173,
    0.080139086147189731, 0.080312924117550422, 0.0805562604802531,
    0.08086905844617126, 0.081251270724534919, 0.0817028395300804,
    0.082223696591786744, 0.082813763163197218, 0.083472950034324755,
    0.084201157545139238, 0.084998275600634943, 0.085864183687475115,
    0.086798750892212118, 0.0878018359210796, 0.0888732871213544,
    0.0900129425042841, 0.091220629769577732, 0.092496166331455187,
    0.093839359346251483, 0.09525000574157233, 0.09672789224699585,
    0.09827279542631584, 0.099884481711322914, 0.10156270743711604,
    0.10330721887894206, 0.10511775229055487, 0.10699403394409035,
    0.10893578017145067, 0.11094269740719032, 0.11301448223289995,
    0.11515082142307836, 0.11735139199248851, 0.11961586124498802,
    0.12194388682382867, 0.12433511676341558, 0.12678918954252011,
    0.12930573413893637, 0.1318843700855753, 0.13452470752798562,
    0.13722634728329447, 0.13998888090055894, 0.1428118907225176,
    0.14569494994873494, 0.14863762270012754, 0.1516394640848634,
    0.15470002026562302, 0.15781882852821355, 0.16099541735152506,
    0.16422930647881784, 0.16752000699033076, 0.170867021377199,
    0.17426984361667108, 0.177727959248612, 0.18124084545328295,
    0.18480797113038444, 0.18842879697935122, 0.19210277558088723,
    0.19582935147972808, 0.19960796126861807, 0.20343803367348962,
    0.20731898963983236, 0.211250242420238, 0.21523119766310839,
    0.2192612535025138, 0.2233398006491864, 0.22746622248263659,
    0.23163989514437761, 0.23586018763224431, 0.24012646189579223,
    0.24443807293276182, 0.24879436888659412, 0.25319469114498255,
    0.25763837443944609, 0.26212474694590859, 0.26665313038626953,
    0.27122284013095055, 0.27583318530240147, 0.28048346887955233,
    0.28517298780319289, 0.2899010330822655, 0.29466688990105527,
    0.29946983772726, 0.3043091504209251, 0.30918409634422606,
    0.31409393847208128, 0.31903793450358153, 0.32401533697421447,
    0.32902539336887171, 0.33406734623561862, 0.3391404333002106,
    0.34424388758133867, 0.34937693750658638, 0.354538807029081,
    0.35972871574482168, 0.36494587901066489, 0.3701895080629527,
    0.37545881013676219, 0.38075298858576168, 0.38607124300265128,
    0.39141276934017522, 0.39677676003268147, 0.40216240411821519,
    0.407568887361125, 0.41299539237516425, 0.41844109874706864,
    0.42390518316059117, 0.4293868195209769, 0.43488517907985663,
    0.44039943056054265, 0.4459287402837061, 0.45147227229341824,
    0.45702918848353491, 0.46259864872440754, 0.46817981098989858,
    0.4737718314846846, 0.47937386477182675, 0.48498506390058882,
    0.490604580534485, 0.49623156507953636, 0.50186516681271831,
    0.50750453401057782, 0.51314881407800261, 0.51879715367712187,
    0.524448698856319, 0.53010259517933778, 0.53575798785446094,
    0.54141402186374354, 0.5470698420922796, 0.55272459345748381,
    0.5583774210383684, 0.56402747020479549, 0.56967388674668551,
    0.57531581700316159, 0.58095240799161241, 0.58658280753665015,
    0.59220616439894924, 0.59782162840394071, 0.60342835057034794,
    0.60902548323854022, 0.61461218019868813, 0.62018759681869806,
    0.62575089017190977, 0.63130121916453463, 0.636837744662818,
    0.64235962961990467, 0.6478660392023885, 0.65335614091652849,
    0.65882910473410983, 0.66428410321793319, 0.6697203116469117,
    0.67513690814075755, 0.68053307378423888, 0.68590799275098879,
    0.69126085242684687, 0.69659084353271583, 0.70189716024691284,
    0.70717900032699887, 0.712435565231067, 0.717666060238471,
    0.72286969456997574, 0.72804568150731275, 0.73319323851212137,
    0.73831158734425673, 0.74339995417945059, 0.74845756972630151,
    0.75348366934258248, 0.758477493150843, 0.76343828615329357,
    0.7683652983459498, 0.77325778483202323, 0.77811500593454008,
    0.78293622730816892, 0.78772072005024552, 0.7924677608109707,
    0.79717663190277332, 0.80184662140881269, 0.80647702329061155,
    0.81106713749480042, 0.815616270058954, 0.82012373321651044,
    0.82458884550075151, 0.82901093184783137, 0.83338932369883667,
    0.83772335910086348, 0.84201238280709623, 0.84625574637587064,
    0.85045280826871117, 0.85460293394732079, 0.85870549596951606,
    0.86275987408408694, 0.86676545532457061, 0.8707216341019236,
    0.87462781229607822, 0.87848339934637087, 0.88228781234082576,
    0.88604047610428438, 0.88974082328536275, 0.89338829444222811,
    0.89698233812717909, 0.90052241097001573, 0.90400797776019148,
    0.90743851152772781, 0.91081349362288644, 0.91413241379458121,
    0.91739477026752081, 0.92060006981807141, 0.92374782784882448,
    0.92683756846186127, 0.9298688245307023, 0.93284113777093092,
    0.93575405880947859, 0.938607147252565, 0.94139997175227874,
    0.94413211007179187, 0.94680314914919594, 0.94941268515995136,
    0.95196032357793992, 0.95444567923511281, 0.956868376379721,
    0.9592280487331255, 0.96152433954517214, 0.96375690164812866,
    0.965925397509171, 0.96802949928141335, 0.970068888853475,
    0.97204325789757351, 0.97395230791614062, 0.97579575028695,
    0.97757330630675354, 0.97928470723341743, 0.98092969432655219,
    0.98250801888663064, 0.98401944229258809, 0.98546373603789827,
    0.98684068176512052, 0.98815007129891252, 0.98939170667750365,
    0.99056540018262351, 0.99167097436788332, 0.99270826208560226,
    0.99367710651207908, 0.99457736117130091, 0.99540888995708832,
    0.9961715671536735, 0.99686527745470577, 0.99748991598068559,
    0.99804538829481926, 0.9985316104172981, 0.99894850883799369,
    0.99929602052757294, 0.99957409294702582, 0.99978268405560977,
    0.99992176231720475, 0.99999130670508207, 0.99999130670508207,
    0.99992176231720475, 0.99978268405560977, 0.99957409294702582,
    0.99929602052757294, 0.99894850883799369, 0.9985316104172981,
    0.99804538829481926, 0.99748991598068559, 0.99686527745470577,
    0.9961715671536735, 0.99540888995708832, 0.99457736117130091,
    0.99367710651207908, 0.99270826208560226, 0.99167097436788332,
    0.99056540018262351, 0.98939170667750365, 0.98815007129891252,
    0.98684068176512052, 0.98546373603789827, 0.98401944229258809,
    0.98250801888663064, 0.98092969432655219, 0.97928470723341743,
    0.97757330630675354, 0.97579575028695, 0.97395230791614062,
    0.97204325789757351, 0.970068888853475, 0.96802949928141335,
    0.965925397509171, 0.96375690164812866, 0.96152433954517214,
    0.9592280487331255, 0.956868376379721, 0.95444567923511281,
    0.95196032357793992, 0.94941268515995136, 0.94680314914919594,
    0.94413211007179187, 0.94139997175227874, 0.938607147252565,
    0.93575405880947859, 0.93284113777093092, 0.9298688245307023,
    0.92683756846186127, 0.92374782784882448, 0.92060006981807141,
    0.91739477026752081, 0.91413241379458121, 0.91081349362288644,
    0.90743851152772781, 0.90400797776019148, 0.90052241097001573,
    0.89698233812717909, 0.89338829444222811, 0.88974082328536275,
    0.88604047610428438, 0.88228781234082576, 0.87848339934637087,
    0.87462781229607822, 0.8707216341019236, 0.86676545532457061,
    0.86275987408408694, 0.85870549596951606, 0.85460293394732079,
    0.85045280826871117, 0.84625574637587064, 0.84201238280709623,
    0.83772335910086348, 0.83338932369883667, 0.82901093184783137,
    0.82458884550075151, 0.82012373321651044, 0.815616270058954,
    0.81106713749480042, 0.80647702329061155, 0.80184662140881269,
    0.79717663190277332, 0.7924677608109707, 0.78772072005024552,
    0.78293622730816892, 0.77811500593454008, 0.77325778483202323,
    0.7683652983459498, 0.76343828615329357, 0.758477493150843,
    0.75348366934258248, 0.74845756972630151, 0.74339995417945059,
    0.73831158734425673, 0.73319323851212137, 0.72804568150731275,
    0.72286969456997574, 0.717666060238471, 0.712435565231067,
    0.70717900032699887, 0.70189716024691284, 0.69659084353271583,
    0.69126085242684687, 0.68590799275098879, 0.68053307378423888,
    0.67513690814075755, 0.6697203116469117, 0.66428410321793319,
    0.65882910473410983, 0.65335614091652849, 0.6478660392023885,
    0.64235962961990467, 0.636837744662818, 0.63130121916453463,
    0.62575089017190977, 0.62018759681869806, 0.61461218019868813,
    0.60902548323854022, 0.60342835057034794, 0.59782162840394071,
    0.59220616439894924, 0.58658280753665015, 0.58095240799161241,
    0.57531581700316159, 0.56967388674668551, 0.56402747020479549,
    0.5583774210383684, 0.55272459345748381, 0.5470698420922796,
    0.54141402186374354, 0.53575798785446094, 0.53010259517933778,
    0.524448698856319, 0.51879715367712187, 0.51314881407800261,
    0.50750453401057782, 0.50186516681271831, 0.49623156507953636,
    0.490604580534485, 0.48498506390058882, 0.47937386477182675,
    0.4737718314846846, 0.46817981098989858, 0.46259864872440754,
    0.45702918848353491, 0.45147227229341824, 0.4459287402837061,
    0.44039943056054265, 0.43488517907985663, 0.4293868195209769,
    0.42390518316059117, 0.41844109874706864, 0.41299539237516425,
    0.407568887361125, 0.40216240411821519, 0.39677676003268147,
    0.39141276934017522, 0.38607124300265128, 0.38075298858576168,
    0.37545881013676219, 0.3701895080629527, 0.36494587901066489,
    0.35972871574482168, 0.354538807029081, 0.34937693750658638,
    0.34424388758133867, 0.3391404333002106, 0.33406734623561862,
    0.32902539336887171, 0.32401533697421447, 0.31903793450358153,
    0.31409393847208128, 0.30918409634422606, 0.3043091504209251,
    0.29946983772726, 0.29466688990105527, 0.2899010330822655,
    0.28517298780319289, 0.28048346887955233, 0.27583318530240147,
    0.27122284013095055, 0.26665313038626953, 0.26212474694590859,
    0.25763837443944609, 0.25319469114498255, 0.24879436888659412,
    0.24443807293276182, 0.24012646189579223, 0.23586018763224431,
    0.23163989514437761, 0.22746622248263659, 0.2233398006491864,
    0.2192612535025138, 0.21523119766310839, 0.211250242420238,
    0.20731898963983236, 0.20343803367348962, 0.19960796126861807,
    0.19582935147972808, 0.19210277558088723, 0.18842879697935122,
    0.18480797113038444, 0.18124084545328295, 0.177727959248612,
    0.17426984361667108, 0.170867021377199, 0.16752000699033076,
    0.16422930647881784, 0.16099541735152506, 0.15781882852821355,
    0.15470002026562302, 0.1516394640848634, 0.14863762270012754,
    0.14569494994873494, 0.1428118907225176, 0.13998888090055894,
    0.13722634728329447, 0.13452470752798562, 0.1318843700855753,
    0.12930573413893637, 0.12678918954252011, 0.12433511676341558,
    0.12194388682382867, 0.11961586124498802, 0.11735139199248851,
    0.11515082142307836, 0.11301448223289995, 0.11094269740719032,
    0.10893578017145067, 0.10699403394409035, 0.10511775229055487,
    0.10330721887894206, 0.10156270743711604, 0.099884481711322914,
    0.09827279542631584, 0.09672789224699585, 0.09525000574157233,
    0.093839359346251483, 0.092496166331455187, 0.091220629769577732,
    0.0900129425042841, 0.0888732871213544, 0.0878018359210796,
    0.086798750892212118, 0.085864183687475115, 0.084998275600634943,
    0.084201157545139238, 0.083472950034324755, 0.082813763163197218,
    0.082223696591786744, 0.0817028395300804, 0.081251270724534919,
    0.08086905844617126, 0.0805562604802531, 0.080312924117550422,
    0.080139086147189731, 0.080034772851092173, 0.080000000000000016 };

  int32_T i0;
  int32_T i1;
  emxArray_creal_T *f;
  emxArray_real_T *m;
  emxArray_real_T *a;
  real_T b;
  real_T alpha1;
  int32_T i2;
  int32_T i;
  int32_T ixstart;
  emxArray_creal_T *r0;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T ix;
  emxArray_creal_T *b_f;
  int32_T c_f[2];
  int32_T iv0[2];
  emxArray_creal_T *pw;
  real_T beta1;
  real_T re;
  real_T im;
  boolean_T guard1 = false;
  boolean_T b_p;
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 36 };

  const mxArray *m0;
  char_T cv1[36];
  static const char_T cv2[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 39 };

  char_T cv3[39];
  static const char_T cv4[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  creal_T ath;
  int32_T exitg2;
  int32_T exitg1;
  creal_T b_pw;
  emxArray_creal_T *d_f;
  emxArray_real_T *b_b;
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 45 };

  char_T cv5[45];
  static const char_T cv6[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv4[2] = { 1, 21 };

  char_T cv7[21];
  static const char_T cv8[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *C;
  emxArray_real_T *r1;
  uint32_T uv0[2];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  emxArray_creal_T *maxval;
  boolean_T b0;
  emxArray_real_T *newc;
  const mxArray *e_y;
  static const int32_T iv5[2] = { 1, 31 };

  char_T cv9[31];
  static const char_T cv10[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  emxArray_real_T *x;
  const mxArray *f_y;
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
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &b_st;
  g_st.tls = b_st.tls;
  h_st.prev = &f_st;
  h_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* MELCEPST Calculate the mel cepstrum of a signal C=(S,FS,W,NC,P,N,INC,FL,FH) */
  /*  */
  /*  */
  /*  Simple use: (1) c=melcepst(s,fs)          % calculate mel cepstrum with 12 coefs, 256 sample frames */
  /* 			  (2) c=melcepst(s,fs,'e0dD')   % include log energy, 0th cepstral coef, delta and delta-delta coefs */
  /*  */
  /*  Inputs: */
  /*      s	  speech signal */
  /*      fs  sample rate in Hz (default 11025) */
  /*      w   mode string (see below) */
  /*      nc  number of cepstral coefficients excluding 0'th coefficient [default 12] */
  /*      p   number of filters in filterbank [default: floor(3*log(fs)) =  approx 2.1 per ocatave] */
  /*      n   length of frame in samples [default power of 2 < (0.03*fs)] */
  /*      inc frame increment [default n/2] */
  /*      fl  low end of the lowest filter as a fraction of fs [default = 0] */
  /*      fh  high end of highest filter as a fraction of fs [default = 0.5] */
  /*  */
  /* 		w   any sensible combination of the following: */
  /*  */
  /*                'R'  rectangular window in time domain */
  /* 				'N'	 Hanning window in time domain */
  /* 				'M'	 Hamming window in time domain (default) */
  /*  */
  /*                't'  triangular shaped filters in mel domain (default) */
  /*                'n'  hanning shaped filters in mel domain */
  /*                'm'  hamming shaped filters in mel domain */
  /*  */
  /* 				'p'	 filters act in the power domain */
  /* 				'a'	 filters act in the absolute magnitude domain (default) */
  /*  */
  /*                '0'  include 0'th order cepstral coefficient */
  /* 				'E'  include log energy */
  /* 				'd'	 include delta coefficients (dc/dt) */
  /* 				'D'	 include delta-delta coefficients (d^2c/dt^2) */
  /*  */
  /*                'z'  highest and lowest filters taper down to zero (default) */
  /*                'y'  lowest filter remains at 1 down to 0 frequency and */
  /* 			   	     highest filter remains at 1 up to nyquist freqency */
  /*  */
  /* 		       If 'ty' or 'ny' is specified, the total power in the fft is preserved. */
  /*  */
  /*  Outputs:	c     mel cepstrum output: one frame per row. Log energy, if requested, is the */
  /*                  first element of each row followed by the delta and then the delta-delta */
  /*                  coefficients. */
  /*  */
  /*  BUGS: (1) should have power limit as 1e-16 rather than 1e-6 (or possibly a better way of choosing this) */
  /*            and put into VOICEBOX */
  /*        (2) get rdct to change the data length (properly) instead of doing it explicitly (wrongly) */
  /*       Copyright (C) Mike Brookes 1997 */
  /*       Version: $Id: melcepst.m 3497 2013-09-26 16:10:51Z dmb $ */
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
  enframe(s, dv1, SD->f1.dv0);
  for (i0 = 0; i0 < 306; i0++) {
    for (i1 = 0; i1 < 512; i1++) {
      SD->f1.dv2[i1 + (i0 << 9)] = SD->f1.dv0[i0 + 306 * i1];
    }
  }

  emxInit_creal_T(sp, &f, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &m, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  rfft(SD, &st, SD->f1.dv2, f);
  st.site = &d_emlrtRSI;
  melbankm(&st, p, fs, m, a, &b);
  st.site = &e_emlrtRSI;
  alpha1 = norm(a->data, a->size);
  if (alpha1 > b) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = f->size[0];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(alpha1, &c_emlrtDCI, sp);
    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI, sp) - 1;
    i1 = f->size[0];
    i2 = (int32_T)emlrtIntegerCheckFastR2012b(b, &c_emlrtDCI, sp);
    i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI, sp);
  }

  st.site = &e_emlrtRSI;
  alpha1 = norm(a->data, a->size);
  if (alpha1 > b) {
    i2 = 0;
    i = 0;
  } else {
    i2 = f->size[0];
    i = (int32_T)emlrtIntegerCheckFastR2012b(alpha1, &b_emlrtDCI, sp);
    i2 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i2, &d_emlrtBCI, sp) - 1;
    i = f->size[0];
    ixstart = (int32_T)emlrtIntegerCheckFastR2012b(b, &b_emlrtDCI, sp);
    i = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i, &d_emlrtBCI, sp);
  }

  emxInit_creal_T(sp, &r0, 2, &emlrtRTEI, true);
  loop_ub = f->size[1];
  ixstart = r0->size[0] * r0->size[1];
  r0->size[0] = i - i2;
  r0->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)r0, ixstart, (int32_T)sizeof(creal_T),
                    &emlrtRTEI);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_loop_ub = i - i2;
    for (ix = 0; ix < b_loop_ub; ix++) {
      r0->data[ix + r0->size[0] * ixstart].re = f->data[(i2 + ix) + f->size[0] *
        ixstart].re;
      r0->data[ix + r0->size[0] * ixstart].im = -f->data[(i2 + ix) + f->size[0] *
        ixstart].im;
    }
  }

  emxInit_creal_T(sp, &b_f, 2, &emlrtRTEI, true);
  loop_ub = f->size[1];
  i2 = b_f->size[0] * b_f->size[1];
  b_f->size[0] = i1 - i0;
  b_f->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_f, i2, (int32_T)sizeof(creal_T),
                    &emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_loop_ub = i1 - i0;
    for (i = 0; i < b_loop_ub; i++) {
      b_f->data[i + b_f->size[0] * i2] = f->data[(i0 + i) + f->size[0] * i2];
    }
  }

  for (i2 = 0; i2 < 2; i2++) {
    c_f[i2] = b_f->size[i2];
  }

  emxFree_creal_T(&b_f);
  for (i2 = 0; i2 < 2; i2++) {
    iv0[i2] = r0->size[i2];
  }

  emxInit_creal_T(sp, &pw, 2, &d_emlrtRTEI, true);
  emlrtSizeEqCheck2DFastR2012b(c_f, iv0, &b_emlrtECI, sp);
  loop_ub = f->size[1];
  i2 = pw->size[0] * pw->size[1];
  pw->size[0] = i1 - i0;
  pw->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)pw, i2, (int32_T)sizeof(creal_T),
                    &emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_loop_ub = i1 - i0;
    for (i = 0; i < b_loop_ub; i++) {
      alpha1 = f->data[(i0 + i) + f->size[0] * i2].re;
      beta1 = f->data[(i0 + i) + f->size[0] * i2].im;
      re = r0->data[i + r0->size[0] * i2].re;
      im = r0->data[i + r0->size[0] * i2].im;
      pw->data[i + pw->size[0] * i2].re = alpha1 * re - beta1 * im;
      pw->data[i + pw->size[0] * i2].im = alpha1 * im + beta1 * re;
    }
  }

  emxFree_creal_T(&r0);
  st.site = &f_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = pw->size[0] * pw->size[1];
  guard1 = false;
  if (i == 1) {
    guard1 = true;
  } else {
    i = pw->size[0] * pw->size[1];
    if (i != 1) {
      guard1 = true;
    } else {
      b_p = false;
    }
  }

  if (guard1) {
    b_p = true;
  }

  if (b_p) {
  } else {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    for (i = 0; i < 36; i++) {
      cv1[i] = cv2[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m0, cv1);
    emlrtAssign(&y, m0);
    d_st.site = &ud_emlrtRSI;
    e_st.site = &re_emlrtRSI;
    error(&d_st, b_message(&e_st, y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  i = pw->size[0] * pw->size[1];
  if (i > 0) {
  } else {
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    for (i = 0; i < 39; i++) {
      cv3[i] = cv4[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m0, cv3);
    emlrtAssign(&b_y, m0);
    d_st.site = &td_emlrtRSI;
    e_st.site = &qe_emlrtRSI;
    error(&d_st, b_message(&e_st, b_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  d_st.site = &cb_emlrtRSI;
  ixstart = 1;
  ath = pw->data[0];
  i = pw->size[0] * pw->size[1];
  if (i > 1) {
    if (muDoubleScalarIsNaN(pw->data[0].re) || muDoubleScalarIsNaN(pw->data[0].
         im)) {
      f_st.site = &db_emlrtRSI;
      ix = 1;
      do {
        exitg2 = 0;
        i = pw->size[0] * pw->size[1];
        if (ix + 1 <= i) {
          ixstart = ix + 1;
          if (!(muDoubleScalarIsNaN(pw->data[ix].re) || muDoubleScalarIsNaN
                (pw->data[ix].im))) {
            ath = pw->data[ix];
            exitg2 = 1;
          } else {
            ix++;
          }
        } else {
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }

    i = pw->size[0] * pw->size[1];
    if (ixstart < i) {
      f_st.site = &eb_emlrtRSI;
      do {
        exitg1 = 0;
        i = pw->size[0] * pw->size[1];
        if (ixstart + 1 <= i) {
          b_pw = pw->data[ixstart];
          if (eml_relop(b_pw, ath)) {
            ath = pw->data[ixstart];
          }

          ixstart++;
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
  }

  emxFree_creal_T(&pw);
  ath.re *= 1.0E-20;
  ath.im *= 1.0E-20;
  b_sqrt(&ath);
  st.site = &g_emlrtRSI;
  alpha1 = norm(a->data, a->size);
  emxFree_real_T(&a);
  if (alpha1 > b) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = f->size[0];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(alpha1, &emlrtDCI, sp);
    i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, sp) - 1;
    i1 = f->size[0];
    i2 = (int32_T)emlrtIntegerCheckFastR2012b(b, &emlrtDCI, sp);
    i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &c_emlrtBCI, sp);
  }

  emxInit_creal_T(sp, &d_f, 2, &emlrtRTEI, true);
  loop_ub = f->size[1];
  i2 = d_f->size[0] * d_f->size[1];
  d_f->size[0] = i1 - i0;
  d_f->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_f, i2, (int32_T)sizeof(creal_T),
                    &emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_loop_ub = i1 - i0;
    for (i = 0; i < b_loop_ub; i++) {
      d_f->data[i + d_f->size[0] * i2] = f->data[(i0 + i) + f->size[0] * i2];
    }
  }

  emxFree_creal_T(&f);
  emxInit_real_T(sp, &b_b, 2, &emlrtRTEI, true);
  c_abs(sp, d_f, b_b);
  st.site = &g_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  emxFree_creal_T(&d_f);
  if (!(m->size[1] == b_b->size[0])) {
    if ((m->size[0] == 1) && (m->size[1] == 1)) {
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      for (i = 0; i < 45; i++) {
        cv5[i] = cv6[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m0, cv5);
      emlrtAssign(&c_y, m0);
      c_st.site = &ke_emlrtRSI;
      g_st.site = &ye_emlrtRSI;
      error(&c_st, b_message(&g_st, c_y, &fb_emlrtMCI), &gb_emlrtMCI);
    } else {
      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv4);
      for (i = 0; i < 21; i++) {
        cv7[i] = cv8[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m0, cv7);
      emlrtAssign(&d_y, m0);
      c_st.site = &le_emlrtRSI;
      g_st.site = &af_emlrtRSI;
      error(&c_st, b_message(&g_st, d_y, &hb_emlrtMCI), &ib_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &emlrtRTEI, true);
  emxInit_real_T(&st, &r1, 2, &emlrtRTEI, true);
  if ((m->size[1] == 1) || (b_b->size[0] == 1)) {
    i0 = C->size[0] * C->size[1];
    C->size[0] = m->size[0];
    C->size[1] = b_b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = m->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = b_b->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        C->data[i0 + C->size[0] * i1] = 0.0;
        i = m->size[1];
        for (i2 = 0; i2 < i; i2++) {
          C->data[i0 + C->size[0] * i1] += m->data[i0 + m->size[0] * i2] *
            b_b->data[i2 + b_b->size[0] * i1];
        }
      }
    }
  } else {
    uv0[0] = (uint32_T)m->size[0];
    uv0[1] = (uint32_T)b_b->size[1];
    i0 = r1->size[0] * r1->size[1];
    r1->size[0] = (int32_T)uv0[0];
    emxEnsureCapacity(&st, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = r1->size[0] * r1->size[1];
    r1->size[1] = (int32_T)uv0[1];
    emxEnsureCapacity(&st, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      r1->data[i0] = 0.0;
    }

    b_st.site = &tc_emlrtRSI;
    c_st.site = &vc_emlrtRSI;
    i0 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)uv0[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)uv0[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      C->data[i0] = 0.0;
    }

    if ((m->size[0] < 1) || (m->size[1] < 1)) {
    } else {
      d_st.site = &wc_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      f_st.site = &wc_emlrtRSI;
      m_t = (ptrdiff_t)(m->size[0]);
      f_st.site = &wc_emlrtRSI;
      n_t = (ptrdiff_t)(b_b->size[1]);
      f_st.site = &wc_emlrtRSI;
      k_t = (ptrdiff_t)(m->size[1]);
      f_st.site = &wc_emlrtRSI;
      lda_t = (ptrdiff_t)(m->size[0]);
      f_st.site = &wc_emlrtRSI;
      ldb_t = (ptrdiff_t)(m->size[1]);
      f_st.site = &wc_emlrtRSI;
      ldc_t = (ptrdiff_t)(m->size[0]);
      alpha1_t = (double *)(&alpha1);
      i0 = m->size[0] * m->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &d_st);
      Aia0_t = (double *)(&m->data[0]);
      i0 = b_b->size[0] * b_b->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &d_st);
      Bib0_t = (double *)(&b_b->data[0]);
      beta1_t = (double *)(&beta1);
      i0 = r1->size[0] * r1->size[1];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &emlrtBCI, &d_st);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&b_b);
  emxFree_real_T(&m);
  st.site = &g_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  d_st.site = &xc_emlrtRSI;
  for (i0 = 0; i0 < 2; i0++) {
    uv0[i0] = (uint32_T)C->size[i0];
  }

  emxInit_creal_T(&d_st, &maxval, 2, &emlrtRTEI, true);
  i0 = maxval->size[0] * maxval->size[1];
  maxval->size[0] = (int32_T)uv0[0];
  maxval->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)maxval, i0, (int32_T)sizeof
                    (creal_T), &b_emlrtRTEI);
  ix = (int32_T)uv0[0] * (int32_T)uv0[1];
  f_st.site = &yc_emlrtRSI;
  if (1 > ix) {
    b0 = false;
  } else {
    b0 = (ix > 2147483646);
  }

  if (b0) {
    h_st.site = &q_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }

  for (i = 0; i + 1 <= ix; i++) {
    if (b_eml_relop(C->data[i], ath) || muDoubleScalarIsNaN(C->data[i])) {
      alpha1 = ath.re;
      beta1 = ath.im;
    } else {
      alpha1 = C->data[i];
      beta1 = 0.0;
    }

    maxval->data[i].re = alpha1;
    maxval->data[i].im = beta1;
  }

  emxFree_real_T(&C);

  /* disp('Option 2') */
  b_log(maxval);
  st.site = &h_emlrtRSI;
  rdct(&st, maxval, r1);
  i0 = c->size[0] * c->size[1];
  c->size[0] = r1->size[1];
  c->size[1] = r1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = r1->size[0];
  emxFree_creal_T(&maxval);
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = r1->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c->data[i1 + c->size[0] * i0] = r1->data[i0 + r1->size[0] * i1];
    }
  }

  emxFree_real_T(&r1);
  emxInit_real_T(sp, &newc, 2, &e_emlrtRTEI, true);
  if (p > 13.0) {
    if (14 > c->size[1]) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = 13;
      i1 = c->size[1];
      i2 = c->size[1];
      i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, sp);
    }

    loop_ub = c->size[0];
    i2 = newc->size[0] * newc->size[1];
    newc->size[0] = loop_ub;
    newc->size[1] = i1 - i0;
    emxEnsureCapacity(sp, (emxArray__common *)newc, i2, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    b_loop_ub = i1 - i0;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        newc->data[i2 + newc->size[0] * i1] = c->data[i2 + c->size[0] * (i0 + i1)];
      }
    }
  } else if (p < 13.0) {
    i = c->size[0];
    i0 = c->size[0];
    emlrtDimSizeEqCheckFastR2012b(i0, i, &emlrtECI, sp);
    i = c->size[0];
    i0 = newc->size[0] * newc->size[1];
    newc->size[0] = c->size[0];
    newc->size[1] = c->size[1] + (int32_T)(13.0 - p);
    emxEnsureCapacity(sp, (emxArray__common *)newc, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = c->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = c->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        newc->data[i1 + newc->size[0] * i0] = c->data[i1 + c->size[0] * i0];
      }
    }

    loop_ub = (int32_T)(13.0 - p);
    for (i0 = 0; i0 < loop_ub; i0++) {
      for (i1 = 0; i1 < i; i1++) {
        newc->data[i1 + newc->size[0] * (i0 + c->size[1])] = 0.0;
      }
    }
  } else {
    i0 = newc->size[0] * newc->size[1];
    newc->size[0] = c->size[0];
    newc->size[1] = c->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)newc, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = c->size[0] * c->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      newc->data[i0] = c->data[i0];
    }
  }

  st.site = &i_emlrtRSI;
  b_st.site = &kd_emlrtRSI;
  b_p = true;
  if (1 > newc->size[1]) {
    b_p = false;
  }

  if (b_p) {
  } else {
    e_y = NULL;
    m0 = emlrtCreateCharArray(2, iv5);
    for (i = 0; i < 31; i++) {
      cv9[i] = cv10[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 31, m0, cv9);
    emlrtAssign(&e_y, m0);
    c_st.site = &ie_emlrtRSI;
    g_st.site = &xe_emlrtRSI;
    error(&c_st, b_message(&g_st, e_y, &m_emlrtMCI), &n_emlrtMCI);
  }

  emxInit_real_T(&b_st, &x, 2, &emlrtRTEI, true);
  b_st.site = &ld_emlrtRSI;
  i0 = x->size[0] * x->size[1];
  x->size[0] = newc->size[0];
  x->size[1] = newc->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = newc->size[0] * newc->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    x->data[i0] = newc->data[i0];
  }

  c_st.site = &md_emlrtRSI;
  for (ixstart = 1; ixstart < newc->size[1]; ixstart++) {
    ix = x->size[0];
    c_st.site = &nd_emlrtRSI;
    for (i = 0; i + 1 <= ix; i++) {
      x->data[i + x->size[0] * (ixstart - 1)] = x->data[i + x->size[0] * ixstart];
    }
  }

  if (newc->size[1] - 1 <= x->size[1]) {
  } else {
    f_y = NULL;
    m0 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&f_y, m0);
    c_st.site = &je_emlrtRSI;
    error(&c_st, f_y, &nb_emlrtMCI);
  }

  emxFree_real_T(&x);
  emxFree_real_T(&newc);

  /*  calculate derivative */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (melcepst.c) */
