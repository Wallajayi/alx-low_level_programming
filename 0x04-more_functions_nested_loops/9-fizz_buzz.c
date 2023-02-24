#include "main.h"

/**
 * main - Almighty Fizzbuzz, prints number from 1 to 100,
 *	  but any number which is a multiple of 3, prints fizz
 *	  and any number which is a multiple of five prints Buzz
 *	  and number both multiple of 3 and 5 prints fizzbuzz
		 *
 * Return: 0 if true.
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (numbe5 % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}
	}
	printf("\n");

	return (0);
}
