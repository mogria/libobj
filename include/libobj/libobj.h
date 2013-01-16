#ifndef LIBOBJ_LIBOBJ_H
#define LIBOBJ_LIBOBJ_H

#include <stdarg.h>
#include <stddef.h>

typedef struct libobj_class {
  size_t class_size;
  void (*construct)(void *self, va_list *args);
  void (*destruct)(void *self);
} Class;

#include "macros.h"
#include "default_functions.h"
#include "memory.h"

#endif /* LIBOBJ_LIBOBJ_H */
