#include "main.h"

/**
  * print_square - prints a square followed by \n
  * @size: size of square
  * Return: 0
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int col;
		int row = 0;

		while (row < size)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
			row++;
		}
	}
}
