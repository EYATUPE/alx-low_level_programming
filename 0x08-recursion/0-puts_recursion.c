#include "main.h"

/**
 *_puts_recursion -  The function that creates a Recursion
 *@s: - The string to be printed
 *Retun: - printed string then the New Line
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}

	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
