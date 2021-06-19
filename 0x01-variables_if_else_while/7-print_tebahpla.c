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
	char myalpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char catch;
	/*my code goes here*/
	for (i = 26 - 1; i >= 0; i--)
	{
	catch = myalpha[i];
	putchar(catch);
	}
	putchar('\n');
	return (0);
}



