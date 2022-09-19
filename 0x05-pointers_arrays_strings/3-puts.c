#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: string to be printed
 * 
 * Description: prints a string
 * on success: returns no error
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
