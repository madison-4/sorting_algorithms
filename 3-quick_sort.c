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
int sort_part(int *a, int size)
{
	int pivot, i, j;

	pivot = a[0];
	i = 0;
	j = size - 1;
	while (i < j)
	{
		do
		{
			i++;
		}while (a[i] <= pivot);
		do
		{
			j--;
		}while (a[j] > pivot);
		if (i < j)
			swap(&a[i], &a[j]);
	}
	swap(&a[0], &a[j]);
	return j;
}
/**
 * @array: array of ints to sort
 * @size: size of the array
 * Return: void since it usess pointers to sort in place
 */
void quick_sort(int *array, size_t size)
{
	int j;

	if (size < 2)
		return;
	if (size > 1)
	{
		j = sort_part(array, size - 1);
		quick_sort(array, j);
		quick_sort(&array[j + 1], size);
	}
}
