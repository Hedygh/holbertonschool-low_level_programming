#include "lists.h"
/**
 * pop_listint - delete head node from linked list
 * @head: pointer to list
 * Return: value of n element
 */
int pop_listint(listint_t **head)
{
	listint_t *nex;
	int i;

	if (!head || !*head)
		return (0);
	nex = *head;
	*head = nex->next;
	i = nex->n;
	free(nex);

	return (i);
}
