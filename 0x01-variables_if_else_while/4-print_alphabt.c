#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the lowercase letters of alphabet
 *
 *Description: print the lowercase alphabet except e, q
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{

		if (i != 101 && i != 113)
		{
			putchar(i);

		}

		i++;
	}
	putchar('\n');

	return (0);
}
