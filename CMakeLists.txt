cmake_minimum_required(VERSION 3.7)
project(learning_modern_cpp)

include(./boost-demo/conanbuildinfo.cmake)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp boost-demo/boost_demo.cpp boost-demo/boost_demo.h)
add_executable(learning_modern_cpp ${SOURCE_FILES})