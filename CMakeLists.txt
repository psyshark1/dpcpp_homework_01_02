﻿cmake_minimum_required (VERSION 3.8)

project (02)
set (CMAKE_CXX_STANDARD 17)

add_executable (02 02.cpp SqlSelectQueryBuilder.cpp SqlSelectQueryBuilder.h SQLException.cpp SQLException.h)
target_compile_features(02 PRIVATE cxx_std_17)
