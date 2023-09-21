#include <stdio.h>

void my_constructor(void) __attribute__((constructor));

/**
 * my_constructor - prints before main
 * Description: This function is marked as a constructor and is executed
 * before the main function
 * Returns: 0
*/

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
