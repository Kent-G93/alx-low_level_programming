#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - funct that converts binary num to unsigned int
 * @b: binary
 * Return: result
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			/*For each '0', we multiply the result by 2.*/
			result = result * 2;
		}
		else if (b[i] == '1')
		{
			/*For each '1', we add 1 to the result and then multiply by 2.*/
			result = result * 2 + 1;
		} else
		{
			/*If we encounter a character other than '0' or '1', return 0.*/
			return (0);
		}
		i++;
	}

	return (result);
}
