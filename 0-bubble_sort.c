#include "sort.h"
/**
 * bubble_sort - function that implements th bubble sort sorting algorithm
 * @array: Array to be sorted
 * @size: size of the array
 * Return: No return, void
 */
void bubble_sort(int *array, size_t size)
{
	size_t swapped = 1, i;
	int temp;

	while (swapped)
	{
		for (i = 0; i < (size - 1); i++)
		{
			swapped = 0;
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array((const int *)array, size);
			}
		}
	}
}
