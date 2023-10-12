#include "lists.h"

/**
 * free_dlistint - it frees thelist.
 * @h: pointer to head
 * Return: nothing
 **/
void free_dlistint(dlistint_t *h)
{
	if (h == NULL)
	return;

	while (h->next)
	{
	h = h->next;
	free(h->prev);
	}
	free(h);
}
