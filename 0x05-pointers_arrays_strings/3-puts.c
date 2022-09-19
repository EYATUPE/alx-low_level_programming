#include "main.h"
#include <stdio.h>

/**
 * _puts -  prints a string, followed by a new line
 * @str - string to be printed
 * Return: always Say Esamu
 */

void _puts(char *str)
{
	int e = 0;

	while (*(str + e) != '\0')
		{
			putchar(*(str + e));
			e++;
		}
	putchar(27);
}
