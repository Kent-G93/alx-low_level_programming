#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees list
 * @head: head of linked lists
 * Return: 0
*/

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
