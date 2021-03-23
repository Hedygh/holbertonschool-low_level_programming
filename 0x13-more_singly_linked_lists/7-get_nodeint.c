#include "lists.h"
/**
 * get_nodeint_at_index - return node at index
 * @head: list
 * @index: index
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
