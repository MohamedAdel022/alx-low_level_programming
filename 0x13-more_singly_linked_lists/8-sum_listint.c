#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @hd: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *hd)
{
	int sum = 0;
	listint_t *temp = hd;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
