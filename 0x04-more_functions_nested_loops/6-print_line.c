#include "main.h"

/**
  * print_line - draws a straight line in terminal
  * @n: number of times char _ should be printed
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count;

		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
