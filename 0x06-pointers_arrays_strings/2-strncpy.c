#include "main.h"

/**
  * _strncpy - function that copies a string
  * @dest: input
  * @src: input
  * @n: input
  * Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (result);
}
