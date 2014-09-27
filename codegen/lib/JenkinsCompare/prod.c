/*
 * File: prod.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32
 */

/* Include files */
#include "rt_nonfinite.h"
#include "JenkinsCompare.h"
#include "prod.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[2]
 * Return Type  : double
 */
double prod(const double x_data[], const int x_size[2])
{
  double y;
  int k;
  if (x_size[1] == 0) {
    y = 1.0;
  } else {
    y = x_data[0];
    k = 2;
    while (k <= x_size[1]) {
      y *= x_data[1];
      k = 3;
    }
  }

  return y;
}

/*
 * File trailer for prod.c
 *
 * [EOF]
 */
