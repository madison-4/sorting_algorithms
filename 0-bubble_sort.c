#include "sort.h"
/**
 * swap - function to swap two integers
 * @a: first int
 * @b: second int
 * Return: no return, void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - function that implements th bubble sort sorting algorithm
 * @array: Array to be sorted
 * @size: size of the array
 * Return: No return, void
 */
void bubble_sort(int *array, size_t size)
{
	size_t swapped = 1, i;

	if (size < 2)
		return;
	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				swapped = 1;
				print_array((const int *)array, size);
			}
		}
	}
}
