#include "main.h"

/**
 *_strchr - a function that locates a character in a string
 *@s: string to look for
 *@c: the character to check for
 *
 *Return: pointer to the first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
