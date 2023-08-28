#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - entry
 * @head: param
 * @str: param
 *
 * Return: ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = (int)strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
