#include "main.h"

/**
  * _strncat - function that concentrates two strings
  * @dest: input
  * @src: input
  * @n: input
  * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
