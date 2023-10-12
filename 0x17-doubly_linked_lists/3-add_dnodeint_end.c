#include "lists.h"

/**
 * add_dnodeint_end - adding node at end
 * @h: head
 * @n: value of the element
 * Return: the address element
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	head = *h;

	if (head != NULL)
	{
		while (head->next != NULL)
			head = head->next;
		head->next = new;
	}
	else
	{
		*h = new;
	}

	new->prev = head;

	return (new);
}
