#ifndef LIBOBJ_MACROS_H
#define LIBOBJ_MACROS_H

#define CLASS(name) \
extern Class *name; \
struct name { \
  Class *class
#define END_CLASS \
};

#define INIT_CLASS(name, construct, destruct) \
static Class name## _class = { \
  sizeof(struct name), \
  construct, \
  destruct \
}; \
\
Class *name = &name## _class;


#define CONSTRUCTOR(name) void name(void *_self, va_list *_args)
#define DESTRUCTOR(name) void name(void *_self)

#endif /* LIBOBJ_MACROS_H */
