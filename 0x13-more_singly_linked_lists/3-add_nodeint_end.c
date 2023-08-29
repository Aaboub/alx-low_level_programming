#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - entry
 * @head: param
 * @str: param
 *
 * Return: ptr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new;
	list_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
