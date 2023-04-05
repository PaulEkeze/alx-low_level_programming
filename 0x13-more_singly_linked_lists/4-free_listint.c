#include "lists.h"

/**
 * free_listint - freeing a  listint_t list.
 * @head: a pointer to the head of the listint_t list to get the freedom.
 *
 **/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
