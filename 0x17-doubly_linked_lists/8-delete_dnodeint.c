#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: dlist
 * @index: index
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
		return (1);
}
