#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a listint_t linked list
 * @head: pointer to the head
 * @index: index of the node to locate
 *
 * Return: NULL - if were not there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
