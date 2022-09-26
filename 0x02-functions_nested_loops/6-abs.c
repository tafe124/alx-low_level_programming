#include "main.h"
#include <stdio.h>

/**
 * _abs -  a function that computes the absolute value of an integer
 *
 * @n: The integer to be printed
 *
 * Description: prints the absolute value of an integer
 *
 * Return: Always 0.
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

}
