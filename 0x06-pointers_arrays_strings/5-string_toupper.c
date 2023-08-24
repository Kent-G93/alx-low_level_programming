#include "main.h"

/**
  * string_toupper - function that changes lowercase letters to uppercase
  * @x: pointer
  * Return: x
*/

char *string_toupper(char *x)
{
	while (*x != '\0')
	{
		if (*x >= 'a' && *x <= 'z')
		{
			*x = *x - 32;
		}
		x++;
	}
	return (x);
}
