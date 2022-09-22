#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: destination to be pasted
 *@src: source of string
 *Return: the pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
		dest[e] = src[e];
	for ( ; e < n; e++)
		dest[e] = '\0';

	return (dest);
}
