#include <string.h>
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
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp->str);
			free(tmp);
		}
		free(head);
		return (NULL);
	}
	if (str != NULL)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			while (*head != NULL)
			{
				tmp = *head;
				*head = tmp->next;
				free(tmp->str);
				free(tmp);
			}
			free(head);
			return (NULL);
		}
	}
	new->len = (int)strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
