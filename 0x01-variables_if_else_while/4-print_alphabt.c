#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-use putchar
 *Return: small case alphabets except q and e
 */

/* betty style doc for function main goes there */
int main(void)
{
	char *small_alphabet;
	size_t i = 0;
	char catch;

	small_alphabet = "abcdefghijklmnopqrstuvwxyz";
	/* your code goes there */
	for (; i < 26; i++)
	{
	catch = small_alphabet[i];
	if (catch != 'q' && catch != 'e')
	{
	putchar(catch);
	}
	}
	putchar('\n');
	return (0);
}

