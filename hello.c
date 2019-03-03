# ifdef   HAVE_CONFIG_H
# include "config.h"
# endif

# include "php.h"
# include "hello.h"

static zend_function_entry hello_functions[] = {
    PHP_FE(hello_world, NULL)
    { NULL, NULL, NULL }
};

zend_module_entry hello_module_entry = {
    # if ZEND_MODULE_API_NO >= 20010901
        STANDARD_MODULE_HEADER,
    # endif
    PHP_HELLO_WORLD_EXTNAME,
    hello_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    # if ZEND_MODULE_API_NO >= 20010901
        PHP_HELLO_WORLD_VERSION,
    # endif
    STANDARD_MODULE_PROPERTIES
};

# ifdef COMPILE_DL_HELLO
ZEND_GET_MODULE(hello)
# endif

PHP_FUNCTION(hello_world) {
    RETURN_STRING("Hello world!");
};
