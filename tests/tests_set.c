#include <assert.h>

#include "vector.h"

int main(void)
{
    vector v;
    vector_init(&v);
    
    vector_push(&v, 13);
    assert(vector_get(&v, 0) == 13);
    vector_set(&v, 0, 42);
    assert(vector_get(&v, 0) == 42);
}
