#include "lists.h"

/**
 * sum_listint - calculating the sum of all the data.
 * data (n) of a listint_t linked list.
 * @head: the pointer to the head of the listint_t list.
 *
 * Return: 0 if the list is empty.
 * if it not - the sum of all the data therein.
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
