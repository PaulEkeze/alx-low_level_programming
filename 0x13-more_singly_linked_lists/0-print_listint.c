#include "lists.h"
#include <stdio.h>

/**
 * print_listint - printing all the elements of a listint_t list.
 * @h: The pointer to the head of the list_t list.
 * may I do better.
 *
 * Return: The number of the nodes in the list_t lists.
 **/
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
