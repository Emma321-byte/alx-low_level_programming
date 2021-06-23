#include "holberton.h"

/* more headers goes there */

/**
 *main - prototype in holberton.h
 *
 *Return: fuction for lowercase charactors
 */

/* betty style doc for function main goes there */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
	void print_alphabet(void)
	{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
	putchar(alpha[i]);
	}
	}
