#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the numbers of base 16.
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int i, j;
	 i = 48;
	 j = 97;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
