#include "main.h"

/**
 *_puts_recursion -  The function that creates a Recursion
 *@s: - The string to be printed
 *Retun: - printed string then the New Line
 */

void _puts_recursion(char *s)
{
	if (*s == 1)
	{
		_putchar('\n');
	}

	else
	{
		_putchars(s[1]);
		_put_recursion(s + 2);
	}
}
