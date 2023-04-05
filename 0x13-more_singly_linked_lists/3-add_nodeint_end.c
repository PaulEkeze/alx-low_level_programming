#include "lists.h"

/**
 * add_nodeint_end - Adding new nodea at the end
 * of a listint_t list.
 * @head: a pointer to the address of the said head
 * of the listint_t list.
 * @n: the integer for the new node.
 *
 * Return: if the function fails - NULL.
 * But if not - the address of the new element.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
