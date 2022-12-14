#include "main.h"

/**
 * print_sign - prints a sign
 * @n: number to check sign
 *
 * Description: determins the sign of number
 *
 * Return: returns the sign or 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
