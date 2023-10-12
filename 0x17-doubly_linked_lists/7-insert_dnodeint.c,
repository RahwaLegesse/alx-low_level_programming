#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @head: head
 * @i: index node
 * @n: node value
 * Return: the address new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int i, int n)
{
	dlistint_t *new;
	dlistint_t *h;
	unsigned int j;

	new = NULL;
	if (i == 0)
		new = add_dnodeint(head, n);
	else
	{
		h = *head;
		j = 1;
		if (h != NULL)
			while (h->prev != NULL)
				h = h->prev;
		while (h != NULL)
		{
			if (j == i)
			{
				if (h->next == NULL)
					new = add_dnodeint_end(head, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = h->next;
						new->prev = h;
						h->next->prev = new;
						h->next = new;
					}
				}
				break;
			}
			h = h->next;
			i++;
		}
	}

	return (new);
}
