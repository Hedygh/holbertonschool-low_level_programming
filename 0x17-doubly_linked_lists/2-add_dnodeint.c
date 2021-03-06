#include "lists.h"
/**
 * add_dnodeint - add node to doubly linked list
 * @head: doubly linked list
 * @n: node value
 * Return: adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!(*head))
	{
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		new->next = (*head);
		(*head)->prev = new;
		(*head) = new;
	}
	return (new);
}
