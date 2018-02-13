MATLAB="/home/vipinsoni/MATLAB"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/vipinsoni/.matlab/R2015b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for multiplication" > multiplication_mex.mki
echo "CC=$CC" >> multiplication_mex.mki
echo "CFLAGS=$CFLAGS" >> multiplication_mex.mki
echo "CLIBS=$CLIBS" >> multiplication_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> multiplication_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> multiplication_mex.mki
echo "CXX=$CXX" >> multiplication_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> multiplication_mex.mki
echo "CXXLIBS=$CXXLIBS" >> multiplication_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> multiplication_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> multiplication_mex.mki
echo "LD=$LD" >> multiplication_mex.mki
echo "LDFLAGS=$LDFLAGS" >> multiplication_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> multiplication_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> multiplication_mex.mki
echo "Arch=$Arch" >> multiplication_mex.mki
echo OMPFLAGS= >> multiplication_mex.mki
echo OMPLINKFLAGS= >> multiplication_mex.mki
echo "EMC_COMPILER=gcc" >> multiplication_mex.mki
echo "EMC_CONFIG=optim" >> multiplication_mex.mki
"/home/vipinsoni/MATLAB/bin/glnxa64/gmake" -B -f multiplication_mex.mk
