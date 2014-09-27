/*
 * File: norm.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "norm.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[2]
 * Return Type  : double
 */
double norm(const double x_data[], const int x_size[2])
{
  double y;
  y = 0.0;
  if (x_size[1] < 1) {
  } else {
    y = fabs(x_data[0]);
  }

  return y;
}

/*
 * File trailer for norm.c
 *
 * [EOF]
 */
