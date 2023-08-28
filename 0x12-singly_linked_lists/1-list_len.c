#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - entry
 * @h: param
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *tmp;

	tmp = h;
	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
