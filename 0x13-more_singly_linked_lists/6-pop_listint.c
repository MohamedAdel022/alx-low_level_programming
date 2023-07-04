#include "lists.h"

/**
 * pop_list - deletes the head node of a linked list
 * @hd: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_list(listint_t **hd)
{
	listint_t *temp;
	int num;

	if (!hd || !*hd)
		return (0);

	num = (*hd)->n;
	temp = (*hd)->next;
	free(*hd);
	*hd = temp;

	return (num);
}
