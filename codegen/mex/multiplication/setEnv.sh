CC="/usr/bin/gcc"
CXX="g++"
CFLAGS="-ansi -fexceptions -fPIC -fno-omit-frame-pointer -pthread -D_GNU_SOURCE -DMATLAB_MEX_FILE "
CXXFLAGS="-ansi -fexceptions -fPIC -fno-omit-frame-pointer -pthread -D_GNU_SOURCE -DMATLAB_MEX_FILE "
COPTIMFLAGS="-O -DNDEBUG"
CXXOPTIMFLAGS="-O -DNDEBUG"
CDEBUGFLAGS="-g"
CXXDEBUGFLAGS="-g"
LD="/usr/bin/gcc"
LDXX="g++"
LDFLAGS="-pthread -Wl,--no-undefined -Wl,-rpath-link,/home/vipinsoni/MATLAB/bin/glnxa64 -shared  -L"/home/vipinsoni/MATLAB/bin/glnxa64" -lmx -lmex -lmat -lm -lstdc++ -Wl,--version-script,"/home/vipinsoni/MATLAB/extern/lib/glnxa64/mexFunction.map""
LDDEBUGFLAGS="-g"
