#include <stdio.h>
#include <stdlib.h>

/**
* main - Function that multiplies two integer and prints it,
*	followed by a new line.
* @argc: Argument count
* @argv: Argument vector, array of pointers to the argument.
* Return: if the program recieves two argument  - 0
*	if the program does not recieve two arguments - 1
*/

int main(int argc, char *argv[])
{
	int i, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = n1 * n2;

	printf("%d\n", i)

	return (0);
}
