include_directories("${PROJECT_SOURCE_DIR}/source")

add_executable(init_t tests_init.c)
target_link_libraries(init_t PRIVATE "${LIB_NAME}")
add_test(NAME init COMMAND init_t)

add_executable(size_t tests_size.c)
target_link_libraries(size_t PRIVATE "${LIB_NAME}")
add_test(NAME size COMMAND size_t)

add_executable(push_t tests_push.c)
target_link_libraries(push_t PRIVATE "${LIB_NAME}")
add_test(NAME push COMMAND push_t)

add_executable(get_t tests_get.c)
target_link_libraries(get_t PRIVATE "${LIB_NAME}")
add_test(NAME get COMMAND get_t)

add_executable(set_t tests_set.c)
target_link_libraries(set_t PRIVATE "${LIB_NAME}")
add_test(NAME set COMMAND set_t)

