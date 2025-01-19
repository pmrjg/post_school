cmake_minimum_required(VERSION 3.30)
project(concurrency)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

#FetchContent_Declare(
#        Boost
#        GIT_REPOSITORY "https://github.com/boostorg/boost.git"
#        GIT_TAG "boost-1.87.0"
#        GIT_SHALLOW ON
#        OVERRIDE_FIND_PACKAGE TRUE
#        EXCLUDE_FROM_ALL
#)
#
#FetchContent_MakeAvailable(Boost)
#
#find_package(Boost 1.87.0 EXACT REQUIRED)

add_executable(${PROJECT_NAME} main.cpp
        deps/add_to_project.h
        source/example.h)

target_link_libraries(${PROJECT_NAME} PRIVATE )
target_precompile_headers(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/deps/add_to_project.h")
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_26)