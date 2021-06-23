#include "holberton.h"
/* more headers goes there */

/**
 *main - prototype in holberton.h
 *
 *Return: fuction for lowercase charactors
 */

/* betty style doc for function main goes there */
	void print_alphabet(void)
	{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++)
	{
	putchar(alpha[i]);
	}
	}
