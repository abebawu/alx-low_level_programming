#include <stdio.h>
#include <variadic_functions.h>
#include <stdarg.h>
/**
 * write function that prints number
 * @separator  is the string to be printed between numbers
 * @n is the number of integers passed to the function
 *
 * is separator is null do not print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int index;
	va_start(number, n);
	for(index=0; index < n; index++)
	{
		printf("%d" , va_arg(number, int));
	if (separator != NULL && index != (n - 1))
	{
		printf("%s", separator);
	}
	}
putchar('\n');
va_end(number);
}
