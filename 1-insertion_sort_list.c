#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list - double linked list
 */
void insertion_sort_list(listint_t **list);
{
	listint_t *node;
	if (list || (*list)->next == NULL)
	return;
	node = (*list)->next;

