#include "main.h"

/**
* _memcpy - copies @n bytes from the memory area pointed to
* @dest: pointer to the string memory to copy
*@src: pointer to the string to copy vharacter from
*@n: number of bytes memory to copy from @src
*Return: returns @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
