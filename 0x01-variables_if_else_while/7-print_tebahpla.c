#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints alphabets in reverse
 *
 * Return: always return zero
 */

int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
