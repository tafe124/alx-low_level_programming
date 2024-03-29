#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 *
 * Return: the first index where @value is located
 *         if @value if not present or if the array is NULL return (-1)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, pos;
	double f;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		f = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		pos = (size_t)(l + f);

		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}
		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
		if (l == h)
			break;
	}

	return (-1);
}
