#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t
 * @head:the first pointor
 * @index:the number we want
 * Return: new or null.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new = head;

	while (new && i < index)
	{
		new = new->next;
		i++;
	}
	if (new)
		return (new);
	else
		return (NULL);
}
