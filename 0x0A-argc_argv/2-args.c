#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
