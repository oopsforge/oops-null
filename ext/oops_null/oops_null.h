#ifndef RUBY_OOPS_NULL
#define RUBY_OOPS_NULL

#include <ruby.h>

#define VALID_PTR(X) ((X) != NULL)

extern VALUE mOops;
extern VALUE cOopsNull;

void Init_oops_null(void);

#endif  /* RUBY_OOPS_NULL */
