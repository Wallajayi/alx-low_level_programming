#include "main.h"
/**
 * puts2 - function to print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[1]);

	_putchar('\n');
}
