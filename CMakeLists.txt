cmake_minimum_required(VERSION 3.16)

project(sxc-vector VERSION 0.2 LANGUAGES C)
enable_testing()

set(CMAKE_C_STANDARD 99)

set(LIB_NAME "sxc_vector")
# cmake will prepend CMAKE_INSTALL_PREFIX to these
set(LIB_DEST "lib")
set(INC_DEST "include")

add_compile_options(-Wall -Wextra -Wpedantic -O2)

add_subdirectory(source)
add_subdirectory(tests)

