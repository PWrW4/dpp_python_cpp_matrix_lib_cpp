cmake_minimum_required(VERSION 3.14)
project(dpp_python_matrixLibCPP)

set(CMAKE_CXX_STANDARD 11)

add_library(dpp_python_matrixLibCPP SHARED library.cpp library.h)