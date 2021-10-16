set(SOURCES
	"vector.c"
	#"vector_int.c"
	#"vector_char.c"
)

set(HEADERS
	"vector.h"
	#"vector_int.h"
	#"vector_char.h"
)

add_library("${LIB_NAME}" SHARED "${SOURCES}")

set_target_properties("${LIB_NAME}" PROPERTIES PUBLIC_HEADER "${HEADERS}")

install(TARGETS "${LIB_NAME}"
		LIBRARY DESTINATION "${LIB_DEST}"
		PUBLIC_HEADER DESTINATION "${INC_DEST}")
