#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int t_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t_size = (size_t)nmemb * size;

	ptr = malloc(t_size);

	if (ptr != NULL)
	{
		memset(ptr, 0, t_size);
	}
	return (ptr);
}
