#include "main.h"

/**
 * rev_string - prints a string, back and forward order.
 * @s: string to be printed in both ways.
 */

void rev_string(char *s)
{
	int length = 0;
	int a;
	char t;

	while (s[length] != '\0')
	{
	length++;
	}

	for (a = 0; a < length / 2; a++)
	{
		t = s[a];
		s[a] = s[length - a - 1];
		s[length - a - 1] = t;
	}
}
