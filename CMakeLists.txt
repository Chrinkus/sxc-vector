cmake_minimum_required(VERSION 3.13)

project(sxc-vector VERSION 0.1 LANGUAGES C)
enable_testing()

set(LIB_NAME "sxc_vector")

# Library destination may be specified from the command line
if (DEFINED LIB_DEST)
	set(LIB_DEST "${PROJECT_SOURCE_DIR}/${LIB_DEST}")
else()
	set(LIB_DEST "~/libs/lib64")
endif()
message("LIB_DEST=${LIB_DEST}")

# Include destination may be specified from the commmand line
if (DEFINED INC_DEST)
	set(INC_DEST "${PROJECT_SOURCE_DIR}/${INC_DEST}")
else()
	set(INC_DEST "~/libs/include/sxc")
endif()
message("INC_DEST=${INC_DEST}")

add_compile_options(-Wall -Wextra -Wpedantic -O2)

add_subdirectory(source)
add_subdirectory(tests)
