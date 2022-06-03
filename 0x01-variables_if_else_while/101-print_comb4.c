#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Description: prints all possible different combinations of 3 digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, i, j;

	for (a = '0'; a <= '9'; a++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (a < i && i < j)
				{
					putchar(a);
					putchar(i);
					putchar(j);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
