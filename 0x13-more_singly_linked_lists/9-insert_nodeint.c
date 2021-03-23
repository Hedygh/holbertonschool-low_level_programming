#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at index position
 * @head: list
 * @idx: index
 * @n: element for new node
 * Return: adress of new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *headtmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	headtmp = *head;

	while (headtmp != NULL && i < idx - 1)
	{
		headtmp = headtmp->next;
		i++;
	}

	if (headtmp == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}
	else
	{
		newnode->next = headtmp->next;
		headtmp->next = newnode;
	}
	return (newnode);
}
