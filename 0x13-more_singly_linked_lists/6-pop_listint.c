#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - funct that deletes head node of listint_t
 * @head: pointer to head of linked lists
 * Return: Head nodes data(n)
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
