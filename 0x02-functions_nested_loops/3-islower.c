#include "main.h"
/**
 * main - entry
 *_islower - functions to print lowercase
 *@c: character to print
 * Return: 1 if its a lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c >= 122)
		return (1);
	else
		return (0);
}