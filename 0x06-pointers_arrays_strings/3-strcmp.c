#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: 0 if s1 and s2 are equals or another figure if not.
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0, hp;

	while (hp == 0)
	{
		if ((*(s1 + hp) == '\0') && (*(s2 + e) == '\0'))
			break;
		hp = *(s1 + e) - *(s2 + e);
		e++;
	}

	return (hp);
}
