#include "vector.h"

#include <stdlib.h>
#include <assert.h>

int main(void)
{
	// do stuff
	vector v;
	vector_init(&v, 16);

	assert(v.size == 0);
	assert(v.cap != 0);		// not sure whether to insist on '8'
	assert(v.elem != NULL);

	vector_free(&v);

	return EXIT_SUCCESS;
}
