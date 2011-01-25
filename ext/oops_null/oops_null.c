#include <oops_null.h>

VALUE mOops = Qnil;
VALUE cOopsNull = Qnil;

static VALUE boom(VALUE self)
{
	FILE* pFile;

	pFile = fopen("MyBogusPurchaseOrder.edi", "rb");

	printf("Backing FILE buffer size %d\n", pFile->_bufsiz);

cleanup:
	fclose(pFile);
	return Qnil;
}

void Init_oops_null(void)
{
	mOops = rb_define_module("Oops");
	cOopsNull = rb_define_class_under(mOops, "Null", rb_cObject);

	rb_define_singleton_method(cOopsNull, "boom", boom, 0);
}
