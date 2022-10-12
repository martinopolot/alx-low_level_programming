#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function to print a name
 * @name: name to be displayed
 * @f: ptr to the printer called func
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
