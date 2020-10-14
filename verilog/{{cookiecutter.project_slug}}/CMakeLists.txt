cmake_minimum_required(VERSION 3.8)
project(cmake_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if (NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

include_directories(hdl)
include_directories(test)
include_directories(simulation)


add_executable(
    main
    simulation/main.cpp
)

verilate(
    main
    INCLUDE_DIRS "."
    SOURCES hdl/top.v
)
