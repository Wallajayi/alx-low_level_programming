#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - voncatenates all the arguments of the program
 *		arguments sepreated by new line.
 * @ac: no of arguments
 * @av: dpuble pointer (array pointer) to arguments
 *
 * Return: NULL if ac || av = 0 error
 *		else pointer to new string
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int n = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}

	n++;
	str = malloc(n * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
