#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry
 * @head: param
 */
void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	if (head->str != NULL)
		free(head->str);
	free(head);
}
