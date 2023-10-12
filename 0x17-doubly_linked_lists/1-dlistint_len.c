#include "lists.h"

/**
 * dlistint_len - returns the number of
 * elements in a linked
 * @head: head
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int c;

	c = 0;

	if (head == NULL)
		return (c);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		c++;
		head = head->next;
	}

	return (c);
}
