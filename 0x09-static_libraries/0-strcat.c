#include "main.h"

/**
  * _strcat - function that concentrates two strings
  * @dest: input
  * @src: input
  * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
