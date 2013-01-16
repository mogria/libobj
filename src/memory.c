#include <libobj/libobj.h>
#include <libobj/memory.h>
#include <libobj/default_functions.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>


void *new(Class *class, ...) {
  /* allocate memory for the object */
  void *p = calloc(1, class->class_size);
  assert(p != NULL);

  /* pointer to the generic class object
     for standrd constructors & destructors */
  *(struct libobj_class **)p = class;

  /* assign default constructor and destructor if not set */
  (class->construct == NULL) && class->construct = libobj_default_constructor;
  (class->destruct == NULL) && class->destruct = libobj_default_destructor;

  /* read the dynamic arguments given to new
     to pass it to the constructor */
  va_list args;
  va_start(args, class);
  class->construct(p, &args);
  va_end(args);

  /* return the newly created and initialized object */
  return p;
}

void delete(void *obj) {
  /* call destructor */
  get_class(obj)->destruct(obj);

  /* free the memory used */
  free(obj);
  return;
}
