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
