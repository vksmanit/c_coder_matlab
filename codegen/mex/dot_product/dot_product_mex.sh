MATLAB="/opt/matlab"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/vipinsoni/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for dot_product" > dot_product_mex.mki
echo "CC=$CC" >> dot_product_mex.mki
echo "CFLAGS=$CFLAGS" >> dot_product_mex.mki
echo "CLIBS=$CLIBS" >> dot_product_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> dot_product_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> dot_product_mex.mki
echo "CXX=$CXX" >> dot_product_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> dot_product_mex.mki
echo "CXXLIBS=$CXXLIBS" >> dot_product_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> dot_product_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> dot_product_mex.mki
echo "LD=$LD" >> dot_product_mex.mki
echo "LDFLAGS=$LDFLAGS" >> dot_product_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> dot_product_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> dot_product_mex.mki
echo "Arch=$Arch" >> dot_product_mex.mki
echo OMPFLAGS= >> dot_product_mex.mki
echo OMPLINKFLAGS= >> dot_product_mex.mki
echo "EMC_COMPILER=gcc" >> dot_product_mex.mki
echo "EMC_CONFIG=optim" >> dot_product_mex.mki
"/opt/matlab/bin/glnxa64/gmake" -B -f dot_product_mex.mk
