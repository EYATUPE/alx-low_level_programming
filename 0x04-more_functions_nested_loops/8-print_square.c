#include "main.h"

/**
 * print_square - prints squares
 * @size: Dimensions
 * Return: returns nothing
 */

void print_square(int size)
{
	int width, heigh;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
