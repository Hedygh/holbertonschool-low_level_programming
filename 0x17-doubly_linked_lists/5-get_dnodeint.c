#include "lists.h"
/**
 * get_dnodeint_at_index - return node at given index
 * @head: dlist to check into
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
