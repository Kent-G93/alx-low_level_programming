#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees list
 * @head: head of linked lists
 * Return: 0
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
