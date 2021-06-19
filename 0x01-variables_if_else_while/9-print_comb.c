#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-lastkiller
 *Return: print them
 */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int catch;
	int space = ' ';
	int comma = ',';
	int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
	catch = n[i];
	putchar(catch + '0');
	if (i != 9)
	{
	putchar(comma);
	putchar(space);
	}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
