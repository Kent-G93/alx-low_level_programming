#include <stdio.h>

/**
  * main - prints the alphabet in lower case \n
  * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
