#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concentrates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concentrated;
	size_t len1, len2, t_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	t_len = len1 + len2;

	concentrated = malloc(t_len + 1);

	if (concentrated != NULL)
	{
		strcpy(concentrated, s1);
		strcat(concentrated, s2);
	}
	return (concentrated);
}
