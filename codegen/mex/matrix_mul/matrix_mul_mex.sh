MATLAB="/opt/matlab"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/vipinsoni/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for matrix_mul" > matrix_mul_mex.mki
echo "CC=$CC" >> matrix_mul_mex.mki
echo "CFLAGS=$CFLAGS" >> matrix_mul_mex.mki
echo "CLIBS=$CLIBS" >> matrix_mul_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> matrix_mul_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> matrix_mul_mex.mki
echo "CXX=$CXX" >> matrix_mul_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> matrix_mul_mex.mki
echo "CXXLIBS=$CXXLIBS" >> matrix_mul_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> matrix_mul_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> matrix_mul_mex.mki
echo "LD=$LD" >> matrix_mul_mex.mki
echo "LDFLAGS=$LDFLAGS" >> matrix_mul_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> matrix_mul_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> matrix_mul_mex.mki
echo "Arch=$Arch" >> matrix_mul_mex.mki
echo OMPFLAGS= >> matrix_mul_mex.mki
echo OMPLINKFLAGS= >> matrix_mul_mex.mki
echo "EMC_COMPILER=gcc" >> matrix_mul_mex.mki
echo "EMC_CONFIG=optim" >> matrix_mul_mex.mki
"/opt/matlab/bin/glnxa64/gmake" -B -f matrix_mul_mex.mk
