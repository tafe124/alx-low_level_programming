#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to memory area s
 * @b: constant value
 * @n: number of bytest to fill in
 * Return: filled memory byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}
	return (s);
}
