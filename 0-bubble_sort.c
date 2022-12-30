#include "sort.h"
/**
*swap_sort - a function switches values while sorting
*@i: pointer to first value to switch
*@j: pointer to second value to switch
*Return: (void)
*/
void swap_sort(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * bubble_sort - sort array
 * @array: array to sort
 * @size: length of array
 * Return: (void)
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (array == NULL)
		return;
	{
		for (i = 0; i < size - 1; i++)
			for (j = 0; j < size - i - 1; j++)
				if (array[j] > array[j + 1])
				{
					swap_sort(&array[j], &array[j + 1]);
					print_array(array, size);
				}
	}
}
