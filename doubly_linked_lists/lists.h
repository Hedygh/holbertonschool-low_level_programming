#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct dlistint_l - struct of a doubly linked list
 * @n: int data of nodes
 * @prev: point to previous node
 * @next: point to next node
 */
typedef struct dlistint_l
{
	int n;
	struct dlist_l *prev;
	struct dlist_l *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
