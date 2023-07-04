#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **hd)
{
	listint_t *temp;

	if (hd == NULL)
		return;

	while (*hd)
	{
		temp = (*hd)->next;
		free(*hd);
		*hd = temp;
	}

	*hd = NULL;
}
