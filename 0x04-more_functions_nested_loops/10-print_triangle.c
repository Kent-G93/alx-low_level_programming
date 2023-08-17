#include "main.h"

/**
  * print_triangle - prints a triangle followed by \n
  * @size: size of square
  * Return: 0
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int col;
		int row;

		for (row = 1; row <= size; row++)
		{
			for (col = row; col < size; col++)
			{
				_putchar(' ');
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
