#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: point to list
 * Return: pointer to the first node of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	if (!head || !*head)
		return (NULL);

	n = 0;
	p = 0;
	while ((*head) != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = (*head);
		(*head) = n;
	}
	(*head) = p;
	return (p);
}
