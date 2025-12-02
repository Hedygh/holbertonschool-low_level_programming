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
 * add_node_end - add new at end of a list
 * @head: contain pointer to head
 * @str: string to dup
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new; /* crée le premier et dernier maillon de la liste */
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
