#ifndef  _variadic_functions_
#define _variadic_functions_
#include <stdarg.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

