#include <stdio.h>

/**
  * main - prints base 10 digits without char,printf,puts
  * Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
