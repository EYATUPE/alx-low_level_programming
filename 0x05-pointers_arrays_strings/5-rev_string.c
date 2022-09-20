#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: String
 * Return: Always Return Nothing
 */

void rev_string(char *s)
{
	char epe;

	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		epe = s[i];

		s[i] = s[len1];

		s[len1--] = epe;
	}
}
