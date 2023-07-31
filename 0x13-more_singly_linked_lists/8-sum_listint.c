#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - prints the result
 * @head:first pointor
 * Return: result.
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *new = head;

	while (new)
	{
		result = result +  new->n;
		new = new->next;
	}
	return (result);
}
