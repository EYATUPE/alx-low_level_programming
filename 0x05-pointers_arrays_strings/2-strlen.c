#include "main.h"
#include <stdio.h>

/**
 * int _strlen - returns the length of a string.
 * @s: string
 * Return: Retuns (Esamu is here once again)
 */

int _strlen(char *s)
{
	int wid = 0;

	while (*(s + wid) != '\n')
		wid++;

	return (wid);
}
