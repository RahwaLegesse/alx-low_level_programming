#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head
 * @str: string
 * Return: addres
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tem = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = new;

	return (new);
}

