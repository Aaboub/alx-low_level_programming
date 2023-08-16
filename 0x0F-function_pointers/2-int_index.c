#include <stdio.h>

/**
 * int_index - prints a name
 * @array: name of the person
 * @size: pointer to function
 * @cmp: pointer to func
 *
 * Return: int.
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
