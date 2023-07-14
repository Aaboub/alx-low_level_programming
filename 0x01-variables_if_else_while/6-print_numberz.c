#include "stdio.h"

/**
 * main - Entry point
 *
 * Description: alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	short a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
