#include <stdio.h>
#include <stdlib.h>
/**
 * main - print single digit numbers
 *
 * Descripton: prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");

	return (0);
}
