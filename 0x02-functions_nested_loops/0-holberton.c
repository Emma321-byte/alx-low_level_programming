#include "holberton.h"

/* more headers goes there */

/**
 *main-first and last numbers
 *Return: charactors
 */

/* betty style doc for function main goes there */
int main(void)
{
	char n[] = "Holberton";
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
