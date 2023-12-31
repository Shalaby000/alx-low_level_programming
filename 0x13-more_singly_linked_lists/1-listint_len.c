#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
