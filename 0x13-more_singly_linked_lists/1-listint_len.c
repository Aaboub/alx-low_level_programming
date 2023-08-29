#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - entry
 * @h: param
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	free(tmp);
	return (size);
}
