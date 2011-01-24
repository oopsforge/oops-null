#ifndef RUBY_OOPS_NULL
#define RUBY_OOPS_NULL

#include <ruby.h>
#include <windows.h>

#define VALID_PTR(X) ((X) != NULL)

extern VALUE mOops;
extern VALUE cOopsNull;

typedef void (__cdecl *MYFUNC)(void);

void Init_oops_null(void);

#endif  /* RUBY_OOPS_NULL */
