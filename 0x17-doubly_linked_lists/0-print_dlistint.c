#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - print elements of list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
