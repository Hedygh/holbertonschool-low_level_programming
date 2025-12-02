#include "lists.h"

/**
 * dlistint_len - lenght of list
 * @h: head of the list
 *
 * Return: number of nodes (lenght)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
