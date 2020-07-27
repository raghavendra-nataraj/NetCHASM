#!/bin/bash -l
cd mdbm
make install
cd ../NetCHASM
mkdir build
cd build
echo "Raghaaaaaaaaaaaaaaaaaaaaaaa"
echo $INPUT_COMMAND
if [ $INPUT_COMMAND = "build" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
    make build VERBOSE=1
fi

if [ $INPUT_COMMAND = "test" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DSKIP-IPV6=ON -DCMAKE_BUILD_TYPE=Debug -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
    make testbuild VERBOSE=1
fi

if [ $INPUT_COMMAND = "package" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64
    make package VERBOSE=1
fi

if [ $INPUT_COMMAND = "slimbuild" ]; then
    cmake .. -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DSKIP-MDBM=ON -DSKIP-ARES=ON -DSKIP-LIBEVENT=ON -DSKIP-KAFKA=ON -DSKIP-RAPIDXML=ON -DCMAKE_BUILD_TYPE=RelWithDebInfo -DINCLUDE_PATHS=/tmp/install/include -DLINK_PATHS=/tmp/install/lib64; 
    make build VERBOSE=1;
fi


