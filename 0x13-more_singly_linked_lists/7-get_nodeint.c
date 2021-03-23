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
	int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		temp = head;
		i++;
	}
	return (temp);
}
