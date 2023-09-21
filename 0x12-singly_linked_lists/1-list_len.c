#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to count number of elements
 * @h: head of linked lists
 * Return: printed chars
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
