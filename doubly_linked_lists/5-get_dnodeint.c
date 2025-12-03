#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node
 * @head: head of list
 * @index: nth node
 * Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nth;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	nth = head;
	return (nth);
}
