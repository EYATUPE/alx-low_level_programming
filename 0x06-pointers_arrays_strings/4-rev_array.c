#include "main.h"

/**
 *reverse_array - reverses the content of an array
 *@a: array
 *@n: number of elements of the array
 *Return: Nothing for this Case
 */

void reverse_array(int *a, int n)
{
	int e, p, temp;

	for (e = 0; e < n - 1; e++)
	{
		for (p = e + 1; p > 0; p--)
		{
			temp = *(a + p);
			*(a + p) = *(a + (p - 1));
			*(a + (p - 1)) = temp;
		}
	}
}

