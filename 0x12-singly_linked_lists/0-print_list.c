#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - entry
 * @h: param
 *
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *tmp;

	tmp = h;
	if (tmp == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (tmp != NULL)
	{
		if (tmp->str != NULL)
		{
			printf("[%d] %s\n", (unsigned int)strlen(tmp->str), tmp->str);
			tmp = tmp->next;
		}
		else
		{
			printf("[0] (nil)\n");
			tmp = tmp->next;
		}
		size++;
	}
	return (size);
}
