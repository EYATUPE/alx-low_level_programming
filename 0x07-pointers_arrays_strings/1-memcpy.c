#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: where the memory area is to be pasted
 *@scr: Where the memory area is to be copied from
 *@n: the number of the bytes to be copied
 *
 *Returns - a pointer destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e = 0;

	for (; e < n; e++)
	{
		dest[e] = src[e];
	}
	return (dest);
}
