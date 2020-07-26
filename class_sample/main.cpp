#include <iostream>
#include "base.h"
#include "child.h"

#define N_BASE 3
#define N_CHILD 4
#define N_TOTAL (N_BASE + N_CHILD)

int main() {
    unsigned int i;
    unsigned int n;
    base *obj_ptr_array[N_TOTAL] = {0};

    /* Allocate and construct objects. Put (base-type) pointers to the array */
    n = 0;
    for (i = 0; i < N_BASE; i++)
        obj_ptr_array[n++] = new base{};
    for (i = 0; i < N_CHILD; i++)
        obj_ptr_array[n++] = new child{i};

    /* Execute print on all the objects */
    for (i = 0; i < N_TOTAL; i++)
        obj_ptr_array[i]->print();

    /* Deallocate the objects */
    for (i = 0; i < N_TOTAL; i++)
        delete(obj_ptr_array[i]);

    return 0;
}