#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line.
* @str: string to be printed.
* Return: always 0.
*/

void puts_half(char *str)
{
	int n;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		n = l / 2;
	}

	else
	{
		n = (l - 1) / 2 + 1;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
