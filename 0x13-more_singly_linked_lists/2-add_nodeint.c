#include "lists.h"

/**
 * add_nodeint - Adding a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the head,
 * listint_t list.
 * @n: The integer for the new node.
 *
 * Return: If the function fails - NULL.
 * But if not - the address of the new element.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
