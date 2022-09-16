#include "main.h"

/**
 *_isupper - uppercase of not
 *@c: character to be debugged
 *
 *Return: either 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
