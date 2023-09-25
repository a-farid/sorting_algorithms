#include "sort.h"

/**
 * selection_sort - sort an array using selection method.
 * @array: an array.
 * @size: size of array.
 * Return: no return.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int mn, tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		mn = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mn])
			{
				mn = j;
			}

		}

		if (mn != i)
		{
			tmp = array[i];
			array[i] = array[mn];
			array[mn] = tmp;
			print_array(array, size);
		}
	}
}
