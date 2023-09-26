#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int count;

	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		count = *h - (*h)->next;
		if (count > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;

	return (leng);
}
