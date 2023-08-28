#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string
  * @c: input
  * Return: 0
*/

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		count++;
	}
	return (0);
}
