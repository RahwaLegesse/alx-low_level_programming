#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - lists the node data
 * @head:points to the first
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int value;

	if (head == NULL || *head == NULL)
		return (0);
	value = (*head)->n;
	new = (*head)->next;
	free(*head);
	(*head) = new;
	return (value);
}
