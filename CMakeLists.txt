include(CMakeToolsHelpers OPTIONAL)
# SET(CMAKE_C_COMPILER "D:/LLVM/bin/clang.exe")
# SET(CMAKE_CXX_COMPILER "D:/LLVM/bin/clang++.exe")
cmake_minimum_required(VERSION 2.8)


PROJECT(AGEO)
# SET(SRC_LIST main.cpp MPI_conf.cpp)
include_directories("include")
FIND_LIBRARY(MPILIB "msmpi.lib" "E:/stuff/AGEO/")
link_libraries(${MPILIB})
add_executable(AGEO MPI_conf.cpp main.cpp )