#!/bin/bash -eu

# build project
# e.g.
# ./autogen.sh
# ./configure
# make -j$(nproc) all

# build fuzzers
# e.g.
# $CXX $CXXFLAGS -std=c++11 -Iinclude \
#     ./fuzzer.cpp -o $OUT/fuzzer \
#     $LIB_FUZZING_ENGINE 



$CXX $CXXFLAGS -std=c++11 -Ilib/ \
    ./fuzzer.cpp -o $OUT/fuzzer \
    $LIB_FUZZING_ENGINE 



#clang++ ./fuzzer.cpp -std=c++14 -g -fsanitize=fuzzer,address 