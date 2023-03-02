#include "main.h"

/**
* string_toupper - changes all lowercase letters to upper case
* @s: string to be changed.
* Return: pointer to the changed string.
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	return (s);
}
