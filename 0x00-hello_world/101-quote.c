#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
  * main - A program  that prints text without using printf or puts
  * Return: 1 (Success)
*/

int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, strlen(message));

return (1);
}
