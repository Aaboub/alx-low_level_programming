#include "unistd.h"
#include "string.h"

/**
 * main - Entry point
 *
 * Description: printf a string to the console
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, strlen(msg));
	return (1);
}
