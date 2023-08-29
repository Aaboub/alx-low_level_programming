#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - entry
 * @h: param
 *
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
	return (size);
}
