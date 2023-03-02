#include "main.h"

/**
* _strcmp - compares 2 string ending at first difderent byte
* @s1: pointer to first string
* @s2: pointer to second string.
*
* Return: if str1 < str2, the negative difference
*	if str1 == str2, 0.
*	if str1 > str2 the positive difference
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
