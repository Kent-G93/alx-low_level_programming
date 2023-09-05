#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int t_len = 0;
	int i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		t_len += strlen(av[i]);
	}
	result = malloc(t_len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, av[0]);
	for (i = 1; i < ac; i++)
	{
		strcat(result, "\n");
		strcat(result, av[i]);
	}
	return (result);
}
