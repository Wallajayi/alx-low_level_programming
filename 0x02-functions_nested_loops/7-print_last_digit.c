#include "main.h"

/**
 * print_last_digit - Function that prints last digit
 *
 * @i: parameter to be checked
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
