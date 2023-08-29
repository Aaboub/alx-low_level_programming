#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint - desc
 * @n: param
 * @next: param
 *
 * Description: desc
 */
typedef struct listint
{
	int n;
	struct listint *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
