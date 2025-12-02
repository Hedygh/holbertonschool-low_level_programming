#include "lists.h"

/**
 * add_dnodeint - add new node to beginning of dlist
 * @head: head of list
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new; /*head still point to previous first node */
	*head = new;
	return (new);
}
