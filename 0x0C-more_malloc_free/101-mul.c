#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(const char *str);

/**
 * is_positive_integer - finds out if an int is positive
 * @str: int
 * Return: 0 success, 1 not
*/

int is_positive_integer(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: count
 * @argv: array
 * Return: 98
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		/*Incorrect number of arguments*/
		return (98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		/*Invalid input, not positive integers*/
		return (98);
	}

	/*Convert the command-line arguments to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/*Calculate the product*/
	result = num1 * num2;

	/*Print the result*/
	printf("%d\n", result);

	return (0);
}
