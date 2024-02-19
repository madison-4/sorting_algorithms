#include "sort.h"
/**
 * sort_list - function to sort a list ack to teh beginning
 * @list: current node to swap back to beginning
 * It is a doubly linked lists
 * Return: void, since it uses pointers, it'll haoen n place
 */
void swap_list(listint_t *curr)
{
	listint_t *tempprev, *tempnext;

	if (!(curr))
		return;
	tempprev = curr->prev;
	tempnext = curr->next;
	tempprev->prev->next = curr;
	curr->prev = tempprev->prev;
	tempnext->prev = tempprev;
	tempprev->prev = curr;
	tempprev->next = tempnext;
	curr->next = tempprev;
}
/**
 * insertion_sort_list - an insertion sort implementation for doublyy linked lists
 * @list: address of the head of the  list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp, *curr;

	if ((!(list)) || (!(*list)) || (!(list->next)))
		return;
	
