#include "lists.h"
#include <stddef.h>

/**
 * list_len - count the number of element in a linked list
 * @h: list to count from
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
