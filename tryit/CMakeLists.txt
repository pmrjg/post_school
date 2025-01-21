cmake_minimum_required(VERSION 3.30)
project(tryit)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp
        examples/lambda.hpp
        examples/move_semantics.hpp
)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)