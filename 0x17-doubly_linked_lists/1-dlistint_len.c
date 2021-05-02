#include "lists.h"
/**
 * dlistint_len - return number of elements in list
 * @h: doubly linked list
 * Return: len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
