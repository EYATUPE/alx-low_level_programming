#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: - character of the pointer
 *@accept: - accept pointer
 *Return - the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (i < accept)
	{
		strspn[i] = s[char + i];
		i++;
	}
	strspn[accept] = '\0';
}

