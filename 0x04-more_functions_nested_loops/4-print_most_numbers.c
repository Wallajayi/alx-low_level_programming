#include "main.h"

/**
 * print_most_numbers - prints digit from 0 - 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		if (start != 2 && start != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
