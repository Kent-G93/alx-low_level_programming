#include "main.h"

/**
* clear_bit - Clears (sets to 0) the bit at a given index.
* @n: A pointer to the unsigned long int number to modify.
* @index: The index, starting from 0, of the bit to clear.
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Create a mask with only the bit at the specified index set */
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Index is out of bounds */
		return (-1);
	}
	*n = *n & ~mask;

	return (1);
}
