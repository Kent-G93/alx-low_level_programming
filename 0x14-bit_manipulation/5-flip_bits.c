#include "main.h"

/**
* flip_bits - Counts the number of bits needed to flip to get from n to m.
* @n: The first unsigned long int number.
* @m: The second unsigned long int number.
*
* Return: The number of bits needed to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}

	return (count);
}
