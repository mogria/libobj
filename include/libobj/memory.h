#ifndef LIBOBJ_MEMORY_H
#define LIBOBJ_MEMORY_H
#include "libobj.h"

/* create a new instance of an new class */
void *new(Class *class, ...);

/* delete the an instance of an class */
void delete(void *obj);

#endif /* LIBOBJ_MEMORY_H */
