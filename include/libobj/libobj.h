#ifndef LIBOBJ_LIBOBJ_H
#define LIBOBJ_LIBOBJ_H

#include <stdarg.h>
#include <stddef.h>

typedef struct libobj_class {
  size_t size;
  void (*construct)(void *self, va_list *args);
  void (*destruct)(void *self);
} Class;

#include "macros.h"
#include "default_functions.h"
#include "memory.h"

Class *get_class(void *obj);
size_t size_of(void *obj);

#endif /* LIBOBJ_LIBOBJ_H */
