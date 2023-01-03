#include "sort.h"
#include <string.h>

/**
 * swap - Function swaps  two data
 * @a: Fisrt value
 * @b: Second value
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * selection_sort -function that
 * sort aray of data by selecting each time the min
 * @array: vctor o data to be sorted
 * @size: n data
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_pos;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_pos])
				min_pos = j;

		if (i != min_pos)
		{
			swap(&array[min_pos], &array[i]);
			print_array(array, size);
		}
	}
}
