#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - function that prints the sum two diagonals of
  * a square matrix of integers
  * @a: input
  * @size: input
  * Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
		y = y + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", x, y);
}
