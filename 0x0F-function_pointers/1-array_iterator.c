#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints a name
 * @array: name of the person
 * @size: pointer to function
 * @action: pointer to func
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
