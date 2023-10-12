#include "lists.h"

/**
 * add_dnodeint - adding new node at first
 * @h: head
 * @n: value of the element
 * Return: the address element
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;
	dlistint_t *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	head = *h;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	new->next = head;

	if (head != NULL)
		head->prev = new;

	*h = new;

	return (new);
}
