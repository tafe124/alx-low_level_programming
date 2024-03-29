#include <stdio.h>

/**
 * print_array - prints array from @low index to @high index
 *
 * @array: the array to be printed
 * @low: the index for starting printing
 * @high: the last index for printing
 *
 * Return: void
 */
void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");
	for (; low < high; low++)
		printf("%d, ", array[low]);
	printf("%d\n", array[low]);
}

/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: the search space
 * @size: the size of @array
 * @value: the value to be searched
 *
 * Return: the index where @value is located
 *         if value is not present or the array is null returns (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, high = (int)size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
