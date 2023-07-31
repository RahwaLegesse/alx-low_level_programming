#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the elements
 * @h:the head link
 * Return: Always value.
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
