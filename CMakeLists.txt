cmake_minimum_required(VERSION 3.13)

project(sxc-vector VERSION 0.1 LANGUAGES C)
enable_testing()

set(CMAKE_C_STANDARD 11)

set(LIB_NAME "sxc_vector")
# cmake will prepend CMAKE_INSTALL_PREFIX to these
set(LIB_DEST "lib")
set(INC_DEST "include")

add_compile_options(-Wall -Wextra -Wpedantic -O2)

add_subdirectory(source)
add_subdirectory(tests)
