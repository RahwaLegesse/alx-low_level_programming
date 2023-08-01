#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert the link
 * @head:first pointor
 * @idx:index of the number
 * @n:number of adress
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int j;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (j = 0; tem && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new->next = tem->next;
			tem->next = new;
			return (new);
		}
		else
			tem = tem->next;
	}
	return (NULL);
}

