#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 *		containing a copy of the string given as parameter
 * @str: strinf to copy
 *
 * Return: null if insufficient memory or str == null
 *		a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;

	copy = malloc(i * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}

	return (copy);
}
