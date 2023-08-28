#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry
 * @head: param
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

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
		free(new);
		return (NULL);
	}
	if (str != NULL)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->len = (int)strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
