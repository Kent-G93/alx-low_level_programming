#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc(strlen(str) + 1);
	
	if (duplicate != NULL)
	{
	strcpy(duplicate, str);
	}
	return (duplicate);
}
