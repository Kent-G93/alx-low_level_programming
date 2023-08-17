#include "main.h"

/**
  * more_numbers - prints numbers 0 to 14 , 10 times
  * Return: 0
*/

void more_numbers(void)
{
	int i;
	int count;

	while (count < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		count++;
	}
}
