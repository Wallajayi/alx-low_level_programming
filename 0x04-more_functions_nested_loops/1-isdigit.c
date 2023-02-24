#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: digit to be checked
 *
 * Return: 1 if true and 0 otherwise
 */

int _isdigit(int c)
{
	int start = 48, end = 57;

	if (c >= start && <= end)
		return (1);
	else
		return (0);
}
