#include "sort.h"
/**
 * swap - function to swap two integers in memory
 * @one: first integer
 * @two: second integer
 * Return: void no return
 */
void swap(int *one, int *two)
{
	int temp;

	temp = *one;
	*one = *two;
	*two = temp;
}
/**
 * sort_part - a function to sort an array using quicksort
 * @a: farray to sort
 * @size: size of the array to sort // last element
 * Return: index where the partitin ended
 */
int sort_part(int *a, int left, int right)
{
	int pivot, i, j;

	pivot = a[left];
	i = left + 1;
	j = right;

	while (1)
	{
		while ( i <= j &&
