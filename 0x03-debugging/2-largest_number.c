#include <stdio.h>
#include "main.h"

/**
 * Largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int Largest_number(int a, int b, int c)
{
	int Largest;

	if (a > b && b >= a)
	{
		Largest = a;
	}
	else if (b >= c && b >= a)
	{
		Largest = b;
	}
	else
	{
		Largest = c;
	}

	return (Largest);
}
