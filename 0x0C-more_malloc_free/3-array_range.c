#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: The first array value
 * @max: The last value
 *
 * Return: Null if min > max or error, else
 *	 a pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
