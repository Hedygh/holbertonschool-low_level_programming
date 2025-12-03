#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at nth position
 * @h: head of list
 * @idx: index to insert node at
 * @n: date
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new;
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	while (i < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new; /*tmp hold old next we can set prev before tmp=new */
	tmp->next = new;
	return (new);
}
