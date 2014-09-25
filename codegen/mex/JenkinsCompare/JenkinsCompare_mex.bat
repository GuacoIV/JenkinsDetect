@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=JenkinsCompare_mex
set MEX_NAME=JenkinsCompare_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for JenkinsCompare > JenkinsCompare_mex.mki
echo COMPILER=%COMPILER%>> JenkinsCompare_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> JenkinsCompare_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> JenkinsCompare_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> JenkinsCompare_mex.mki
echo LINKER=%LINKER%>> JenkinsCompare_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> JenkinsCompare_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> JenkinsCompare_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> JenkinsCompare_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> JenkinsCompare_mex.mki
echo BORLAND=%BORLAND%>> JenkinsCompare_mex.mki
echo OMPFLAGS= >> JenkinsCompare_mex.mki
echo OMPLINKFLAGS= >> JenkinsCompare_mex.mki
echo EMC_COMPILER=msvc110>> JenkinsCompare_mex.mki
echo EMC_CONFIG=optim>> JenkinsCompare_mex.mki
"C:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f JenkinsCompare_mex.mk
