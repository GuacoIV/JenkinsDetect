/* 
 * File: _coder_JenkinsCompare_api.h 
 *  
 * MATLAB Coder version            : 2.6 
 * C/C++ source code generated on  : 27-Sep-2014 00:07:32 
 */

#ifndef ___CODER_JENKINSCOMPARE_API_H__
#define ___CODER_JENKINSCOMPARE_API_H__
/* Include files */
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    double *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/

/* Function Declarations */
extern void JenkinsCompare_initialize(emlrtContext *aContext);
extern void JenkinsCompare_terminate(void);
extern void JenkinsCompare_atexit(void);
extern void JenkinsCompare_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void JenkinsCompare(double x[78596], double sampleRate, emxArray_real_T *y);
extern void JenkinsCompare_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_JenkinsCompare_api.h 
 *  
 * [EOF] 
 */
