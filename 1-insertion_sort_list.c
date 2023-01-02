#include "sort.h"
/**
 * insertion_sort_list - sort a double linked list
 * @list: vector of data nodes
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *currentnode, *swap, *searchnode;

	if (!list || !*list)
		return;

	currentnode = *list;
	while ((currentnode = currentnode->next))
	{
		swap = currentnode;
		while (swap->prev && swap->n < swap->prev->n)
		{
			searchnode = swap->prev;
			if (swap->next)
				swap->next->prev = searchnode;
			if (searchnode->prev)
				searchnode->prev->next = swap;
			else
				*list = swap;
			searchnode->next = swap->next;
			swap->prev = searchnode->prev;
			swap->next = searchnode;
			searchnode->prev = swap;

			print_list(*list);
		}
	}
}
