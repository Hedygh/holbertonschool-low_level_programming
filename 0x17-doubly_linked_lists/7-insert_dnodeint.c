#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node at index
 * @h: dlist
 * @idx: index
 * @n: node value to add
 * Return: new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	if (!(*h))
		return (NULL);
	tmp = (*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp != NULL)
	{
		new->n = n;
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
