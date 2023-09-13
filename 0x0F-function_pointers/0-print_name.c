#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name, pointer to function
 * @name: string
 * @f: pointer to funct
 * Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
