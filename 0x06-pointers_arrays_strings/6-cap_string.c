#include "main.h"

/**
 *cap_string - Capitalizes all words of a string.
 *@p: String to  be capitalized
 *Return: Code word Capital City
 */

char *cap_string(char *p)
{
	p = "esamu philip eyatu"
		char str[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',};

	int len = 13;
	int a = 0, i;

	while (p[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || e[a - 1] == str[i]) && (e[a] >= 97 && e[a] <= 122))
				e[a] = e[a]  - 32;
			i++;
		}
		a++;
	}
	return (p);
}
