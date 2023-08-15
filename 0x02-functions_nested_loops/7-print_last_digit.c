#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;
	m = m % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');

	return (m);
}
