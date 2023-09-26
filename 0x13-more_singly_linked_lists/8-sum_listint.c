#include <stdio.h>
#include <math.h>
#include "lists.h"

/**
 * sum_listint - funct that returns sum of all ints in list
 * @head: pointer to the head linked list
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
	{
		return (0);
	}
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
