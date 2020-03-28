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
include_directories(${SFML_INCLUDE_DIR})

set(SOURCE_FILES
        src/main.cpp
        include/algo.hpp
        src/algo.cpp
        src/SortingAlgorithms.cpp
        include/SortingAlgorithms.hpp
        )

add_executable(sorting-algorithms ${SOURCE_FILES})
set(CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules/" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED COMPONENTS audio network graphics window system)
set(SFML_STATIC_LIBRARIES TRUE)

if(NOT SFML_FOUND)
    message(FATAL_ERROR "SFML couldn't be located!")
endif()
target_link_libraries(sorting-algorithms sfml-audio sfml-network sfml-graphics sfml-window sfml-system)