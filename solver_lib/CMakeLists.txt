cmake_minimum_required(VERSION 3.5)
project(solver_lib LANGUAGES CXX)

add_library(solver_lib STATIC solver.cpp solver.h)
target_include_directories(solver_lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)