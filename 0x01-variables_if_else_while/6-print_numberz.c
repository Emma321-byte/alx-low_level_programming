
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-use putchar
 *Return: print int
 */

/* betty style doc for function main goes there */
int main(void)
{
	int count;

	/* your code goes there */
	for (count = 0; count < 10; count++)
	{
	putchar(count + '0');
	}
	putchar('\n');
	return (0);
}
