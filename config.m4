PHP_ARG_ENABLE(hello, Whether to enable Hello World, 
[--enable-hw Enable Hello World extension ])

if test "$PHP_HELLO" = "yes"; then
    AC_DEFINE(HAVE_HELLO, 1, [Whether you have Hello World])
    PHP_NEW_EXTENSION(hello, hello.c, $ext_shared)
fi