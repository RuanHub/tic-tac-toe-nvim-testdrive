# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(TicTacToe VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/headers)

# Source files
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create the executable
add_executable(TicTacToe ${SOURCES})

# Compiler options
target_compile_options(TicTacToe PRIVATE
    -Wall
)
