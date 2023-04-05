#include "lists.h"

/**
 * free_listint2 - freeing a listint_t list2.
 * @head: a poimter to the address of the head
 * of the listint_t list.
 *
 * Sets the NULL
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
