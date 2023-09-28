#include <stdio.h>
#include "main.h"

/**
* get_bit - Gets the value of a bit at a given index.
* @n: The unsigned long int number to extract the bit from.
* @index: The index, starting from 0, of the bit to get.
*
* Return: The value of the bit at the specified index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	/* Create a mask with only the bit at the specified index set */
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Index is out of bounds */
		return (-1);
	}
	if ((n & mask) != 0)
	{
		/* The bit at the index is set (1) */
		return (1);
	}
	else
	{
		/* The bit at the index is not set (0) */
		return (0);
	}
}
