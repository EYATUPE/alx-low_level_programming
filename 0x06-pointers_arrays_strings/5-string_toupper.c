#include "main.h"

/**
 *string_toupper - Changing lower cases to upper cases
 *Return: Capitalized characters
 */

char *string_toupper(char *)
{
	int p = 0;
	char str[] = "eyatu philip esamu\n";
	char ch;

	while (str[p])
	{
		ch = str[p];
		putchar(toupper(ch));
		p++;
	}

	return (0);
}
