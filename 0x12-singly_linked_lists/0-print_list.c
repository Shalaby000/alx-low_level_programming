#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list.
* @h: singly linked list.
* Return: number of elements in the list.
*
*/
int _strlen(char *d)
{
	int i = 0;

	if (!d)
		return (0);

	while (*d++)
		i++;

	return (i);
}

size_t print_list(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str ? h->str: "(nil)");
	h->next;
	i++;
	}
	return (i);
}

