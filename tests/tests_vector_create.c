#include "vector.h"

#include <stdlib.h>
#include <assert.h>

struct Point2D {
	int x;
	int y;
};

struct Point3D {
	int x;
	int y;
	int z;
};

int main(void)
{
	vector v1 = vector_create(sizeof(struct Point2D));
	assert(v1.size == 0);
	assert(v1.cap == 0);
	assert(v1.elem_size == sizeof(struct Point2D));
	assert(v1.elem == NULL);

	vector v2 = vector_create(sizeof(struct Point3D));
	assert(v2.size == 0);
	assert(v2.cap == 0);
	assert(v2.elem_size == sizeof(struct Point3D));
	assert(v2.elem == NULL);

	return EXIT_SUCCESS;
}
