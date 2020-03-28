cmake_minimum_required(VERSION 3.4)
project(sorting-algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall -Wextra -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wpedantic -Wconversion -Wcast-align -Wunused -Wshadow -Wold-style-cast")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wpointer-arith -Wcast-qual -Wno-missing-braces -Winline -Wreorder")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wsynth -Wsign-promo -Wvla -Wnon-virtual-dtor -Wpacked -Wenum-compare \
    -Wuninitialized -Winit-self -Winvalid-pch -Woverlength-strings -Woverloaded-virtual -Woverflow -Wsequence-point \
    -Wno-unknown-pragmas -finput-charset=UTF-8 -Wlogical-op -Wsync-nand -Wstrict-null-sentinel -Wnoexcept -Wunreachable-code \
    -Wabi=11 -Wctor-dtor-privacy -Winit-self -Wfloat-equal -Wtype-limits -Wredundant-decls")

include_directories(include)

set(SOURCE_FILES
        src/main.cpp
        include/SortingAlgorithms.hpp
        src/SortingAlgorithms.cpp
        )

add_executable(sorting-algorithms ${SOURCE_FILES})