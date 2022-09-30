#include "main.h"

/**
 *_memset - fills a area memory with a constant byte
 *@s: address of the mermory area
 *@b: character to be used
 *@n: number of the bytes to be used
 *
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
