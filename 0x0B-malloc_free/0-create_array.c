#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: character
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
