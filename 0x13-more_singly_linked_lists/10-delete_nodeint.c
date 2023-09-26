#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - insert new node at given position
 * @head: head of linked list
 * @index: index
 * Return: 1,success, -1,fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current = *head;
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
