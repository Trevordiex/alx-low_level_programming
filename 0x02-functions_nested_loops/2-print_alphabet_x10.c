#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 *
 * Description: prints lowercase alphabets 10 times
 *
 * Return: always returns void
 */

void print_alphabet_x10(void)
{
	int c, x;

	x = 0;
	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');

		x++;
	}
}
