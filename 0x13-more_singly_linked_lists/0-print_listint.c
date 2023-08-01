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
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}

	return (count);
}
