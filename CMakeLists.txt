# Specify the minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Pets)

# Specify the C standard
set(CMAKE_C_STANDARD 99)

# Add the source file
add_executable(pets pets.c)
