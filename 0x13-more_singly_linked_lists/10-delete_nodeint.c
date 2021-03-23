#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index of list
 * @head: point to list
 * @index: index where to delete node
 * Return: 1 on success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *hd;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		hd = *head;
		*head = hd->next;
		free(hd);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL && i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	hd = tmp->next->next;
	free(tmp->next);
	tmp->next = hd;
	return (1);
}
