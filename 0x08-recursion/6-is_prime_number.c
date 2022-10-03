#include "main.h"

/**
 * is_prime_number - a function returns a prime integer
 * @n: the number to be used
 * Return: 1 if the input integer is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
	int prime = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, prime));
}

/**
 * @n: number to be used and checked
 * @prime: a number to start checking from
 * Return: 1 if n is a prime number, 0 if otherwise
 */

int is_prime(int n, int prime)
{
	if (prime <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, prime - 1));
}
