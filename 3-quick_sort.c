#include "sort.h"

/**
 * partition - partition and order the array.
 * @array: the array.
 * @size: the size.
 * @low: the low limit.
 * @high: the hish limit.
 * Return: return the position of i (the new pivot).
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, tmp;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}

	i++;
	if (i != j)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i);
}

/**
 * sort - recursive sort function.
 * @array: the array.
 * @size: the size.
 * @low: the low limit.
 * @high: the hish limit.
 * Return: no return.
 */
void sort(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sort array using quick sort method.
 * @array: the array.
 * @size: the size.
 * Return: no return.
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
