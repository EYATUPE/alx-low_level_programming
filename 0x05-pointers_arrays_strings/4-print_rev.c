#include "main.h"
#include <stdio.h>

/**
 * _rev - prints a string, in reverse
 * @s:  Prints in Reverse
 * Return: Always say Esamu
 */

void print_rev(char *s);
{
	int hub = strlen(s);

	while (hub--)
		putchar(*(s + hub));
	putchar(10);
}
