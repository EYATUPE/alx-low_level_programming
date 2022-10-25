#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: The node to be used
 * Return: Returning the number of nodes
 * Task 0
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int e;

	tmp = h;
	for (e = 0; tmp; e++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (e);
}
