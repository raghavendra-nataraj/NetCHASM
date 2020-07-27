cd mdbm
make install
cd ../NetCHASM
mkdir build
cd build
if [ "$1" = "build" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
    make build VERBOSE=1
fi

if [ "$1" = "package" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
    make package VERBOSE=1
fi
