#include "sort.h"
/**
 * bubble_sort - sorting array function
 * @array: array to be sorted
 * @size: size of an array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;

	if (array == NULL || len < 2)
		return;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(array[j], array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
/**
 * swap_int - swap two integers
 * @a: the first integer
 * @b: the second integer
 * Return: nothing
 */
void swap_int(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

