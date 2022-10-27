#include "lists.h"

/**
 * listint_len - prints the length of a linked list
 * @h: number of nodes
 * Return: the size of the list
 * Task: 1
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
