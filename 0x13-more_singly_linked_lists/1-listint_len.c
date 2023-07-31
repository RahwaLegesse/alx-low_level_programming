#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of  elements
 * @h:head of the link
 * Return: Always value.
 */
size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		value++;
		h = h->next;
	}
	return (value);
}
