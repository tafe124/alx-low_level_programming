#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations.
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i;


	for (i = 48; i <= 57; i++)
	{
	putchar(i);

	if (i == 57)
	{
	break;
	}

	putchar(',');
	putchar (' ');

	}

	putchar('\n');

	return (0);
}
