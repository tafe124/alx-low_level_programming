#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the reverse lowercase of alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
