#include "holberton.h"
/**
 *
 *print_alphabet - prototype in holberton.h
 *
 *Return: fuction for lowercase charactors
 */
	void print_alphabet(void)
	{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 27; i++)
	{
	putchar(alpha[i]);
	}
	}
