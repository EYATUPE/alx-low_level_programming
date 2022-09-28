#include "main.h"

/**
 *_strlen_recursion - This Prototype returns the lenth of a string
 *@s: The string to be returned
 *Return: the lenth of the given String
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == 0)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
