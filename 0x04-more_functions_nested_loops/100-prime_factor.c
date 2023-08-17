#include <stdio.h>

/**
  * main - finds and prints largest prime factor of the number 612852475143
  * Return: (0) Success
*/

int main(void)
{
	long int x;
	long int max;
	long int y;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}

	for (y = 3; y * y <= x; y = y + 2)
	{
		while (x % y == 0)
		{
			max = y;
			x = x / y;
		}
	}

	if (x > 2)
		max = y;

	printf("%ld\n", max);

	return (0);
}
