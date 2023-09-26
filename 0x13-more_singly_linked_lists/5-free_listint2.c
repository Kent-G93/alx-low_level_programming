#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - funct that frees list
 * @head: head of linked lists
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
