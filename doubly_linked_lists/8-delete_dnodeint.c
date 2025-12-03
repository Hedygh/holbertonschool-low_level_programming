#include "lists.h"

/**
 * delete_dnodeint_at_index - del node at idx
 * @head: head of list
 * @index: idx to del node at
 * Return: 1 if succeed or -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
