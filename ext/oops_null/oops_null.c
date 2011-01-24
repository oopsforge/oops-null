#include <oops_null.h>

VALUE mOops = Qnil;
VALUE cOopsNull = Qnil;

static VALUE boom(VALUE self)
{
	HMODULE hMod = NULL;
	MYFUNC pFunc = NULL;
	VALUE rc = Qnil;

	/* load the custom DLL */
	hMod = LoadLibrary(TEXT("MyBogusNonExistent.dll"));

	/* get a pointer to the desired function */
	pFunc = (MYFUNC) GetProcAddress(hMod, TEXT("MyBogusFunction"));

	/* call the desired function */
	(pFunc)();

	/* done */
	FreeLibrary(hMod);
	return Qtrue;
}

void Init_oops_null(void)
{
	mOops = rb_define_module("Oops");
	cOopsNull = rb_define_class_under(mOops, "Null", rb_cObject);

	rb_define_method(cOopsNull, "boom", boom, 0); 
}
