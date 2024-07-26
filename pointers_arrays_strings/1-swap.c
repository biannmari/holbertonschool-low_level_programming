#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer to be swapped
 * @b: pointer to the second integer to be swapped
 */

void swap_int(int *a, int *b)
{
int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
