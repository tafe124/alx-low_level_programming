#include <stdio.h>
#include <stdlib.h>
/**
 * main - print single digit numbers
 *
 * Desciption: prints all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
