#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: input
  * @b: input 2
  * Return: a and b
*/

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
