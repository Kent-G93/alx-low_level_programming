#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - insert new node at given position
 * @head: head of linked list
 * @idx: index
 * @n: integer to be added
 * Return: address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
