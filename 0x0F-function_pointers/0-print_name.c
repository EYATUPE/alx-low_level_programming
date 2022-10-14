#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: Name to be printed
 * @f: The pointer to be used
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
