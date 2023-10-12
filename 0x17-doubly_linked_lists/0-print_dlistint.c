#include "lists.h"

/**
 * print_dlistint - print elements
 * dlistint_t list
 * @head: head
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	int c;

	c = 0;

	if (head == NULL)
		return (c);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		c++;
		head = head->next;
	}

	return (c);
}
