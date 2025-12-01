#include "lists.h"

/**
 * _strlen - lgt of s
 * @str: s
 * Return: len
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node - add new node at the beginning of a list
 * @head: point to what contain the pointer to head of list
 * @str: string to add to new
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
