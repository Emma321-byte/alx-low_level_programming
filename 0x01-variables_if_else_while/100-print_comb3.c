#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-advance
 *Return: random combi of two numbers
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int j;
	int n[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int catch1;
	int catch2;
	int comma = ',';
	int space = ' ';
	/* your code goes there */
	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	catch1 = n[i];
	catch2 = n[j];
	if (catch1 != catch2 && catch1 < catch2)
	{
	putchar(catch1 + '0');
	putchar(catch2 + '0');
	if (catch1 == 8 && catch2 == 9)
	{
	break;
	}
	else
	{
	putchar(comma);
	putchar(space);
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
