#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: String one
 * @s2: string two
 * @n: The number to be used
 * Return: return NULL if the function fails
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int e, p, h;
	char *s;

	if (s1 == NULL)
		e = 0;
	else
	{
		for (e = 0; s1[p]; e++)
			;
	}
	if (s2 == NULL)
		p = 0;
	else
	{
		for (p = 0; s2[p]; p++)
			;
	}
	if (p > n)
		p = n;
	s = malloc(sizeof(char) * (e + p + 1));
	if (s == NULL)
		return (NULL);
	for (h = 0; h < e; h++)
		s[h] = s1[h];
	for (h = 0; h < p; h++)
		s[h + e] =  s2[h];
	s[e + p] = '\0';
	return (s);
}
