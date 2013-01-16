#include <libobj/libobj.h>
#include <assert.h>

Class *get_class(void *obj) {
  assert(obj != NULL);
  return *(Class **)obj;
}

size_t size_of(void *obj) {
  return get_class(obj)->size;
}
