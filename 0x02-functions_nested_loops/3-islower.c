#include "main.h"

/**
 * _islower - function to check for lowercase character
 *
 * Return - return value of _islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
