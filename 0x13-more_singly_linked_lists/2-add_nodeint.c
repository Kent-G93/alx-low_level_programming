#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at start of list
 * @head: head of linked lists
 * @n: integer to be added
 * Return: address of new node, NULL failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
