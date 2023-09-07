#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = strlen(s1);
	unsigned int lens2 = strlen(s2);
	char *concentrated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= lens2)
	{
		n = lens2;
	}
	concentrated = malloc(lens1 + n + 1);
	if (concentrated == NULL)
	{
		return (NULL);
	}
	strcpy(concentrated, s1);
	strncat(concentrated, s2, n);

	return (concentrated);
}
