#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct dlistint_l - struct of a doubly linked list
 * @n: int data of nodes
 * @prev: point to previous node
 * @next: point to next node
 */
typedef struct dlistint_l
{
	int n;
	struct dlistint_l *prev;
	struct dlistint_l *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
#endif
