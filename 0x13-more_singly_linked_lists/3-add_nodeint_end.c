#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - prints the adress in reverse
 * @head:points to the first link
 * @n:number of data enter
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (tem->next)
	{
		tem = tem->next;
	}
		tem->next = new;
		return (new);
}
