#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main-use putchar
 *Return: small case alphabets
 */

/* betty style doc for function main goes there */
int main(void)
{
	char *small_alphabet;
	char *upper_case;
	size_t i = 0;
	size_t s = 0;
	char catch;
	char catch_upper;

	small_alphabet = "abcdefghijklmnopqrstuvwxyz";
	/* your code goes there */
	for (; i < 26; i++)
	{
	catch = small_alphabet[i];
	putchar(catch);
	}
	upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (; s < 26; s++)
	{
	catch_upper = upper_case[s];
	putchar(catch_upper);
	}
	putchar('\n');
	return (0);
}
