#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting node
 * @h: head
 * @index: index node
 * Return: -1 if it fail, 1 if it sucessed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int j;

	head1 = *h;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	j = 0;

	while (head1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*h = head1->next;
				if (*h != NULL)
					(*h)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		j++;
	}

	return (-1);
}
