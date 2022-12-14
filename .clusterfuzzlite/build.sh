#!/bin/bash -eu

# build project
# e.g.
# ./autogen.sh
# ./configure
# make -j$(nproc) all

# build fuzzers
# e.g.
$CXX $CXXFLAGS -std=c++11 -Iinclude \
    ./fuzzer.cpp \
    $LIB_FUZZING_ENGINE 

./a.out


#clang++ ./fuzzy.cpp -std=c++14 -g -fsanitize=fuzzer,address 