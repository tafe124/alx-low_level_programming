#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Description: print the letters of the aphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (j <= 90)
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
