MATLAB="/opt/matlab"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/vipinsoni/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for simple_vec_dot_product" > simple_vec_dot_product_mex.mki
echo "CC=$CC" >> simple_vec_dot_product_mex.mki
echo "CFLAGS=$CFLAGS" >> simple_vec_dot_product_mex.mki
echo "CLIBS=$CLIBS" >> simple_vec_dot_product_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> simple_vec_dot_product_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> simple_vec_dot_product_mex.mki
echo "CXX=$CXX" >> simple_vec_dot_product_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> simple_vec_dot_product_mex.mki
echo "CXXLIBS=$CXXLIBS" >> simple_vec_dot_product_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> simple_vec_dot_product_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> simple_vec_dot_product_mex.mki
echo "LD=$LD" >> simple_vec_dot_product_mex.mki
echo "LDFLAGS=$LDFLAGS" >> simple_vec_dot_product_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> simple_vec_dot_product_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> simple_vec_dot_product_mex.mki
echo "Arch=$Arch" >> simple_vec_dot_product_mex.mki
echo OMPFLAGS= >> simple_vec_dot_product_mex.mki
echo OMPLINKFLAGS= >> simple_vec_dot_product_mex.mki
echo "EMC_COMPILER=gcc" >> simple_vec_dot_product_mex.mki
echo "EMC_CONFIG=optim" >> simple_vec_dot_product_mex.mki
"/opt/matlab/bin/glnxa64/gmake" -B -f simple_vec_dot_product_mex.mk
