include_directories("${PROJECT_SOURCE_DIR}/source")

add_executable(init_test tests_vector_init.c)
target_link_libraries(init_test PRIVATE "${LIB_NAME}")
add_test(NAME init COMMAND init_test)

