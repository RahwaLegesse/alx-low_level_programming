#include "lists.h"

/**
 * sum_dlistint - sum of all the data
 * @h: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *h)
{
	int result;

	result = 0;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;

		while (h != NULL)
		{
			result += h->n;
			h = h->next;
		}
	}

	return (result);
}
