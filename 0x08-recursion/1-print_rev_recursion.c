#include "main.h"

/**
 *_print_rev_recursion - This Function prints a string in Reverse
 *@s: string to be printed
 *Return: reversed String
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
