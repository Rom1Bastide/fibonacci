#include <php.h>
#include <Zend/zend_API.h>
#include <Zend/zend_hash.h>
#include <Zend/zend_types.h>
#include <stddef.h>

#include "ccphp.h"
#include "ccphp_arginfo.h"
#include "_cgo_export.h"


PHP_MINIT_FUNCTION(ccphp) {
    
    return SUCCESS;
}

zend_module_entry ccphp_module_entry = {STANDARD_MODULE_HEADER,
                                         "ccphp",
                                         ext_functions,             /* Functions */
                                         PHP_MINIT(ccphp),  /* MINIT */
                                         NULL,                      /* MSHUTDOWN */
                                         NULL,                      /* RINIT */
                                         NULL,                      /* RSHUTDOWN */
                                         NULL,                      /* MINFO */
                                         "1.0.0",                   /* Version */
                                         STANDARD_MODULE_PROPERTIES};

PHP_FUNCTION(Ccphp_fibonacci_naive)
{
    zend_long n = 0;
    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_LONG(n)
    ZEND_PARSE_PARAMETERS_END();
    long result = fibonacci_naive((long) n);
    RETURN_LONG(result);
}

