#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: input
  * @accept: input
  * Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		int found = 0;
		char *a;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
			if (found == 0)
			{
				break;
			}
		count++;
		s++;
	}
	return (count);
}
