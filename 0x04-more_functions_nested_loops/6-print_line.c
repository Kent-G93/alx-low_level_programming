#include "main.h"

/**
  * print_line - draws a straight line in terminal
  * @n: number of times char _ should be printed
*/

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
