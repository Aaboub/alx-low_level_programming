#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - entry
 * @head: param
 * @n: param
 *
 * Return: ptr
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
