#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in linked listint_t lists
 * @h: a pointer to the head of listint_t list
 *
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
