#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: memory area
  * @src:memory area
  * @n:bytes
  * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
