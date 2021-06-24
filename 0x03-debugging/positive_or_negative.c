#include "holberton.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{

	/* your code goes there */
	if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
}
