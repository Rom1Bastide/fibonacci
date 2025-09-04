//export_php:namespace Ccphp
package main

import(
	"C"
    "github.com/dunglas/frankenphp"
)

//export_php:function fibonacci_naive(int $n): int
// A simple recursive function to compute the nth Fibonacci number.
func fibonacci_naive(n int64) int64 {
	if n <= 1 {
		return n
	}
	return fibonacci_naive(n-1) + fibonacci_naive(n-2)
}
