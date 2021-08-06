# CMakeList.txt : CMake project for password_generator, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("password_generator")

# Add source to this project's executable.
add_executable (password_generator "password_generator.cpp" "password_generator.h")

# TODO: Add tests and install targets if needed.
