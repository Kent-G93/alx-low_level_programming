#include "main.h"

/**
  * _memset - function that fills memory with a constant byte
  * @s: input
  * @b: input
  * @n: bytes
  * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
