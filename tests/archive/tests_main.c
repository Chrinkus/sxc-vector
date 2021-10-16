#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "vector_char.h"

static void vec_char_init_success(void** state)
{
	(void) state;	/* unused */
	vector_char vc;
	vector_char_init(&vc);

	assert_int_equal(vc.sz, 0);
	assert_int_equal(vc.cp, 0);
	assert_null(vc.elem);

	vector_char_free(&vc);
}

int main(void)
{
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(vec_char_init_success),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}
