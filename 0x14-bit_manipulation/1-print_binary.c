#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalen of a decimal number
 * @n: number to print
*/

void print_binary(unsigned long int n)
{

	/*Determine the number of bits in the unsigned long int*/
	int shift = sizeof(n) * 8 - 1;

	int leadingZero = 1;  /*Flag to skip leading zeros*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		/*Create a mask with only the current bit set*/
		unsigned long int mask = 1UL << shift;

		if ((n & mask) != 0)
		{
			_putchar('1');
			/*Turn off the leadingZero flag after the first '1' is encountered*/
			leadingZero = 0;
		}
		else if (!leadingZero)
		{
			_putchar('0');
		}

		shift--;
	}
}
