cd mdbm
make install
cd ../NetCHASM
mkdir build
cd build
cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
make build VERBOSE=1