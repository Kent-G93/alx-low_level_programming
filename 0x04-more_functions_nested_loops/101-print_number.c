#include "main.h"

/**
  * print_number - prints an integer \n
  * @n: integer
  * Return: 0
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
			n = -n;
	}
	else
	{
		int div = 1;

		while (n / div >= 10)
		{
			div *= 10;
		}
		while (div > 0)
		{
			int dig = n / div;

			_putchar(dig + '0');
			n %= div;
			div /= 10;
		}
	}
}
