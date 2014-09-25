/*
 * JenkinsCompare_types.h
 *
 * Code generation for function 'JenkinsCompare'
 *
 */

#ifndef __JENKINSCOMPARE_TYPES_H__
#define __JENKINSCOMPARE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_JenkinsCompareStackData
#define typedef_JenkinsCompareStackData
typedef struct
{
    struct
    {
        creal_T y[156672];
    } f0;
    struct
    {
        real_T s[156672];
        creal_T dcv0[9792];
    } f1;
} JenkinsCompareStackData;
#endif /*typedef_JenkinsCompareStackData*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T
struct emxArray_creal_T
{
    creal_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_creal_T*/
#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct emxArray_creal_T emxArray_creal_T;
#endif /*typedef_emxArray_creal_T*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_int32_T_1x1
#define struct_emxArray_int32_T_1x1
struct emxArray_int32_T_1x1
{
    int32_T data[1];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x1*/
#ifndef typedef_emxArray_int32_T_1x1
#define typedef_emxArray_int32_T_1x1
typedef struct emxArray_int32_T_1x1 emxArray_int32_T_1x1;
#endif /*typedef_emxArray_int32_T_1x1*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1
struct emxArray_real_T_1x1
{
    real_T data[1];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x1*/
#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1
typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;
#endif /*typedef_emxArray_real_T_1x1*/
#ifndef struct_emxArray_real_T_1x2
#define struct_emxArray_real_T_1x2
struct emxArray_real_T_1x2
{
    real_T data[2];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x2*/
#ifndef typedef_emxArray_real_T_1x2
#define typedef_emxArray_real_T_1x2
typedef struct emxArray_real_T_1x2 emxArray_real_T_1x2;
#endif /*typedef_emxArray_real_T_1x2*/

#endif
/* End of code generation (JenkinsCompare_types.h) */
