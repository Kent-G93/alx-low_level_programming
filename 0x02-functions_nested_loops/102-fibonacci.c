#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 50;
	unsigned long long int fib1 = 1, fib2 = 2;

	printf("%llu, %llu", fib1, fib2);

	for (int i = 2; i < n; i++)
	{
		unsigned long long int fib_next = fib1 + fib2;

		printf(", %llu", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}
	printf("\n");
	return (0);
}
