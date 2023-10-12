#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node .
 * @h: pointer to head
 * @index: index , starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	unsigned int s;
	dlistint_t *temp;

	s = 0;
	if (h == NULL)
	return (NULL);

	temp = h;
	while (temp)
	{
	if (index == s)
	return (temp);
	s++;
	temp = temp->next;
	}
	return (NULL);
}
