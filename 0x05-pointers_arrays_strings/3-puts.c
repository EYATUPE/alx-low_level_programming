#include "main.h"
#include <stdio.h>

/**
 * _puts -  prints a string, followed by a new line
 * @str - string to be printed
 * Description: prints a string
 * Return: always Say Esamu Did it
 */

void _puts(char *str)
{
	int e = 0;

	while (*(str + e) != '\0')
		{
			putchar(*(str + e));
			e++;
		}
	putchar(10);
}
