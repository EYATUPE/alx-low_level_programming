#include "main.h"

/**
 *factorial - This returns a factorial of a given number
 *@n: - The number which will be used
 *Return: Return -1 that will indicate an error
 */

int factorial(int n)
{
	int next_number;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_number = factorial(n - 1);
	return (n * next_number);
}

