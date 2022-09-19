#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: Retuns (Esamu is here once again)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\n')
		len++;

	return (len);
}
