package ccphp

/*
#include <stdlib.h>
#include "ccphp.h"
*/
import "C"
import "github.com/dunglas/frankenphp"
import "unsafe"

func init() {
	frankenphp.RegisterExtension(unsafe.Pointer(&C.ccphp_module_entry))
}




//export fibonacci_naive
func fibonacci_naive(n int64) int64 {
	if n <= 1 {
		return n
	}
	return fibonacci_naive(n-1) + fibonacci_naive(n-2)
}

