#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copy paste string
 *@dest: destination to paste
 *@scr: source of the text
 *
 *Return: Esamu
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
