#include "sort.h"
/**
 * swap - a function to swap two integers
 * both ints are elemenst in an arrays
 * It swaps their positions in an array
 * It also impkements the selction sort algorithm
 * @one: first integer
 * @two: secodnint
 * Return: nothing, void
 */
void swap(int *one, int *two)
{
	int temp;

	temp = *one;
	*one = *two;
	*two = temp;
}
/**
 * selection_sort - function taht implements the selction sort algo
 * @array: array to use
 * @size: size of the array
 * Return: void sincr it uses pointers, no need to return
 * Values are swapped in place
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (size < 2)
		return;
	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = (i + 1); j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array((const int *)array, size);
		}
	}
}
