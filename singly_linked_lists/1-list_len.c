#include "lists.h"

/**
 * list_len - count number of element of a list
 * @h: head of the list
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
