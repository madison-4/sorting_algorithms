#include "sort.h"
/**
 * swap_list - function to sort a list ack to teh beginning
 * This function is to be used with the seltion sort function only.
 * It can only receive non-NULL curr and it diesn't check for that
 * @curr: current node to swap back to beginning
 * It is a doubly linked lists
 * @head: address of the head
 * Return: void, since it uses pointers, it'll haoen n place
 */
void swap_list(listint_t *curr, listint_t **head)
{
	listint_t *tempprev, *tempnext, *tempprevprev;

	tempprev = curr->prev;
	tempnext = curr->next;
	if ((tempprev->prev == NULL) && (curr->next == NULL))
	{
		tempprev->next = NULL;
		tempprev->prev = curr;
		curr->prev = NULL;
		curr->next = tempprev;
		*head = curr;
		return;
	}
	if (tempprev->prev == NULL)
	{
		tempprev->next = curr->next;
		tempprev->prev = curr;
		curr->next = tempprev;
		curr->prev = NULL;
		tempnext->prev = tempprev;
		*head = curr;
		return;
	}
	if (curr->next == NULL)
	{
		tempprevprev = curr->prev->prev;
		tempprevprev->next = curr;
		curr->prev = tempprevprev;
		curr->next = tempprev;
		tempprev->next = NULL;
		tempprev->prev = curr;
		return;
	}
	tempprev->prev->next = curr;
	curr->prev = tempprev->prev;
	tempnext->prev = tempprev;
	tempprev->prev = curr;
	tempprev->next = tempnext;
	curr->next = tempprev;
}
/**
 * insertion_sort_list - an insertion sort implementation dlinked lists
 * @list: address of the head of the  list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *curr;

	if (((list) == NULL) || ((*list) == NULL) || (((*list)->next) == NULL))
		return;
	head = *list;
	while (head && head->next)
	{
		curr = head->next;
		if ((head->n) > (head->next->n))
		{
			swap_list(curr, list);
			print_list((const listint_t *)*list);
			head = *list;
			continue;
		}
		head = head->next;
	}
}
