#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @esamu: Name to be printed
 * @f: The pointer to be used
 * Return: Print Name
 */

void print_name(char *esamu, void (*f)(char *))
{
	if (!esamu || !f)
		return;
	f(esamu);
}
