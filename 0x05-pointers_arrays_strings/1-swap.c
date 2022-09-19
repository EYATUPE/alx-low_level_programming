#include "main.h"
/*
 *swap_int - swaps two integers' values
 *@a: first integer
 *@b: second integer
 *Return: Always (Esamu does his own work)
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}
