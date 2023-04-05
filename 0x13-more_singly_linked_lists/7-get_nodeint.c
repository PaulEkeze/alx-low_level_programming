#include "lists.h"

/**
 * get_nodeint_at_index - locating a given node.
 * of a listint_t linked list.
 * @head: the pointer to the head of the listint_t list.
 * @index: the index of the node to locate - starting from 0.
 *
 * Return: if the node does not exit - NULL.
 * if it exists - the located node.
 **/
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
