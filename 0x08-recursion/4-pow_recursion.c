#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: value to be used
 *@y: power to be used
 *Return: If y is lower than 0 then the function should reurn -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
