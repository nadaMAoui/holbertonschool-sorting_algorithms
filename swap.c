#include "sort.h"
/*
*swap_sort - a function switches values while sorting
*@i: pointer to first value to switch
*@j: pointer to second value to switch
*Return: 0
*/
void swap_sort(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}
