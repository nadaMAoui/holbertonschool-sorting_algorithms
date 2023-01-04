#include "sort.h"
/**
 * quick_sort -  a function that sorts an array 
 * of integers in ascending order using the Quick sort algorithm 
 * @array: array to be sorted 
 * @size: size of the array
 * return: void
*/
void quick_sort(int *array, size_t size)
    {
	size_t pivot;

	if (!array || size < 2)
		return;

	print_sort(array, size, 1);
	pivot = partition(array, size);
	quick_sort(array, pivot);
	quick_sort(array + pivot, size - pivot);
}

/**
 * swap - Function that swaps two values
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * partition - Function that sets the pivot for quick_sort
 * @array: Array to partition
 * @size: Size of array
 * Return: (i + 1)
 */
size_t partition(int array[], size_t size)
{
	int pivot;
	size_t i = -1;
	size_t j;

	if (!array || size < 2)
		return (0);

	pivot = array[size - 1];

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_sort(array, size, 0);
			}
		}
	}
	if (i + 1 != size - 1)
	{
		swap(&array[i + 1], &array[size - 1]);
		print_sort(array, size, 0);
	}
	return (i + 1);
}

/**
 * print_sort - Function that prints as it should
 * @array: Array to be printed
 * @size: Size of array
 * @init: Should initialize array
 * Return: 0
 */
void print_sort(int array[], size_t size, int init)
{
	static int *p = (void *)0;
	static size_t s;

	if (!p && init)
	{
		p = array;
		s = size;
	}
	if (!init)
		print_array(p, s);
}
