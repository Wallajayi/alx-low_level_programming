#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: The string
 */

void print_rev(char *s)
{
	int rev, len;

	len = 0;

	while (s[len] != '\0')
	/* loops through string len and count except last null char*/
	{
		lem++;
	}

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
