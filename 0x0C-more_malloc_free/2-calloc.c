#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: byte size of array elements
 *
 * Return: Null if nmeb = 0, size = 0, or error
 *	else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmeb == 0 || size == 0)
		return (NULL);

	c = malloc(nmeb * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < (nmeb * size); i++)
		c[i] = 0;

	return (c);
}
