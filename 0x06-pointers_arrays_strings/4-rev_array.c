#include "main.h"

/**
  * reverse_array - function that reverses the content of an array
  * @a: input
  * @n: input
  * Return: 0
*/

void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		int temp = a[begin];

		a[begin] = a[end];
		a[end] = temp;

		begin++;
		end--;
	}
}
