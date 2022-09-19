#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: string
 * Return: Esamu alone
 */
void puts2(char *str)
{
	int p = 0;

	while (*(str + p) != '\0')
	{
		if (p % 2 == 0)
			putchar(*(str + p));
		p++;
	}
	putchar(10);
}
