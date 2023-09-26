#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function to count number of elements
 * @h: head of linked lists
 * Return: printed chars
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
