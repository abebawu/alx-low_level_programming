#include <stdio.h>
#include "function_pointers.h"
/**
 * function used to print name
 * @name used to print name
 *
 * @f is a pointer function used to point to name
 */
void print_name(char *name, void (*f)(char *))
	if(name && f)
	f(name);
else
	return ;
}
