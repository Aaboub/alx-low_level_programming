#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Entry
 *
 * @ptr: param
 * @old_size: param
 * @new_size:param
 *
 * Return: pointer
 */
int *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);

}
