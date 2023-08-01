#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints all elements of a linked list
 * @h: head of the list
 *
 * Return: returns the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
