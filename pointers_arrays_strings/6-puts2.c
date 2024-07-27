#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: every second character.
* Return: void.
*/

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
		if (str[l] != '\0')
		{
		l++;
		}
	}
	_putchar('\n');
}
