#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n)
 * of listint_t list
 * @head: a pointer to the head of the listint_t list
 *
 * Return: if the list is empty
 * otherwise- the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
