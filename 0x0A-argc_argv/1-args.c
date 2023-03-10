#include <stdio.h>

/**
* main - Prints the number of arguments passed to it, excludes program name
* @argc: Argument counr
* @argv: Argument vector, array of pointers to the argument.
*
* Return: Always 0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
