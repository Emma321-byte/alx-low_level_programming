#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-use putchar
 *Return: small case alphabets in reverse order
 */

/* betty style doc for function main goes there */
int main(void)
{
	char myalpha[16] = "0123456789abcdef";
	int i;
	char catch;
	/*my code goes here*/
	for (i = 0; i < 16; i++)
	{
	catch = myalpha[i];
	putchar(catch);
	}
	putchar('\n');
	return (0);
}
