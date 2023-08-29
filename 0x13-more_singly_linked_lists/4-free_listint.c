#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry
 * @head: param
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
}
