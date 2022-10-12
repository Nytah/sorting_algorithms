#include "sort.h"

/**
 * swap: swaps two nodes
 * @head: the head node
 * @node1: the first node
 * @node2: the second node
 */
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}

/**
 * insertion_sort_list : sorts a doubly linked list with
 * the insertion algorithm
 * 
 * @list: list to be sorted
 * 
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *fwd, *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;
    
    for (fwd = (*list)->next; fwd && fwd->prev; fwd = fwd->next)
    {
        for (fwd && fwd->prev && fwd->n < fwd->prev->n;
		     fwd = fwd->prev)
		{
			tmp = fwd->prev;
			swap(list, tmp, fwd);
			print_list(*list);
			fwd = fwd->next;
		}
	}
}
