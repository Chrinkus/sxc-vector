include_directories("${PROJECT_SOURCE_DIR}/source")

# List of test files
set(test_files
	"tests_vector_create.c"
	"tests_vector_reserve.c"
)

# Carve up test name to create tests
string(LENGTH "tests_vector_" test_prefix_len)

foreach(file IN LISTS test_files)
	get_filename_component(file_we ${file} NAME_WE)
	string(SUBSTRING ${file_we} ${test_prefix_len} -1 func)
	set(command_name "${func}_test")

	add_executable("${command_name}" "${file}")
	target_link_libraries("${command_name}" PRIVATE "${LIB_NAME}")
	add_test(NAME "${func}" COMMAND "${command_name}")
endforeach()
