include_directories("${PROJECT_SOURCE_DIR}/source")

add_executable(initt tests_init.c)
target_link_libraries(initt sxc_vector)

add_test(NAME init COMMAND initt)
