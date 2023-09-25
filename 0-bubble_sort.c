#include "sort.h"

/**
 * bubble_sort - Sort Int array in ascending order using the Bubble sort
 * @array: array of integers
 * @size: size of array
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0, swap = 1;
	unsigned int i = 0;

	if (array == NULL || size < 2)
		return;

	while (swap != 0)
	{
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
