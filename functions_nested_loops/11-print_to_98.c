#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from n to 98,
* followed by a new line.
* @n: The starting number.
*
* Prints all natural numbers from the given number
* to 98, in order, separated by a comma and space.
* It uses the standard library function printf to print the numbers.
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
