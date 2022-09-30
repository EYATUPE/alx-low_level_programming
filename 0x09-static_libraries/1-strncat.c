#include "main.h"

/**
 *_strncat - merges two strings
 *@dest: destination
 *@src: source
 *@n: size of bytes used from src
 *Return: the pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int day = 0, day2 = 0;

	while (*(dest + day) != '\0')
	{
		day++;
	}

	while (day2 < n)
	{
		*(dest + day) = *(src + day2);
		if (*(src + day2) == '\0')
			break;
		day++;
		day2++;
	}
	return (dest);
}
