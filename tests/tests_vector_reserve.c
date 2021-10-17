#include "vector.h"

#include <stdlib.h>
#include <assert.h>

struct Point2D {
	int x;
	int y;
};

int main(void)
{
	vector v1 = vector_create(sizeof(struct Point2D));
	assert(v1.size == 0);
	assert(v1.cap == 0);
	assert(v1.elem == NULL);

	size_t c1 = vector_reserve(&v1, 0);
	assert(v1.size == 0);
	assert(v1.cap == c1);
	assert(v1.elem != NULL);

	vector v2 = vector_create(sizeof(struct Point2D));
	size_t c2 = vector_reserve(&v2, 30);
	assert(c2 == 30);
	assert(v2.size == 0);
	assert(v2.cap == c2);
	assert(v2.elem != NULL);

	vector_free(&v1);
	vector_free(&v2);

	return EXIT_SUCCESS;
}
