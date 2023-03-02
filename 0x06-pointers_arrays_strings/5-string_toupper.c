#include "main.h"

/**
* *string_toupper - changes all lowercase letters to upper case
* @str: string to be changed.
* Return: pointwr to the changed string.
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++
	}
	return (str);
}
