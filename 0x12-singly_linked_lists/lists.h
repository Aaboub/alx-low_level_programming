#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - desc
 * @str: param
 * @len: param
 * @next: param
 *
 * Description: desc
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
