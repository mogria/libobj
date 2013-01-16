#include <libobj/libobj.h>

Class *get_class(void *obj) {
  return *(Class **)obj;
}
