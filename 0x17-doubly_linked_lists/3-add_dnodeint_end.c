#include "lists.h"
/**
 * add_dnodeint_end - add node at end of dlist
 * @head: doubly linked list
 * @n: node data to add
 * Return: adress of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
