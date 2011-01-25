#include <oops_null.h>

VALUE mOops = Qnil;
VALUE cOopsNull = Qnil;

static VALUE boom(VALUE self)
{
	FILE* pFile;

	pFile = fopen("MyBogusPurchaseOrder.edi", "rb");

	/* Trying to reference a member of a FILE structure through a NULL pointer
	 * causes a segmentation fault.
	 */
	printf("Backing FILE buffer size %d\n", pFile->_bufsiz);

	/* Because of the segfault this part will never be reached. It is left
	 * as an example of how an opened file should be closed, thus avoiding
	 * a potential memory leak.
	 */
	fclose(pFile);
	return Qnil;
}

void Init_oops_null(void)
{
	mOops = rb_define_module("Oops");
	cOopsNull = rb_define_class_under(mOops, "Null", rb_cObject);

	rb_define_singleton_method(cOopsNull, "boom", boom, 0);
}
