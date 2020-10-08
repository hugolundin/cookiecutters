cmake_minimum_required(VERSION 3.1...3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project({{cookiecutter.project_slug}} VERSION 0.1.0 LANGUAGES CXX)

include_directories(src)
add_subdirectory(src)
