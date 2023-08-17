#include "main.h"

/**
  * print_diagonal - draws a diagonal line in terminal
  * @n: number of times char _ should be printed
  * Return: 0
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int sp_count;
		int x;

		for (sp_count = 0; sp_count < n; sp_count++)
		{
			for (x = 0; x < sp_count; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
