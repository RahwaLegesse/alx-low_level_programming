#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the inde
 * @head:head of the pointor
 * @index:indicates the num to delete
 * Return: Always 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = NULL;
	listint_t *tem = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}
	while (i < index - 1)
	{
		if (tem == NULL || (tem->next) == NULL)
			return (-1);
		tem = tem->next;
		i++;
	}
	new = tem->next;
	tem->next = new->next;
	free(new);
	return (1);
}
