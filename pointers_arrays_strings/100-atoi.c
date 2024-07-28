#include "main.h"

/**
* _atoi - convert a string to an integer.
* @s: the pointer to the string to be converted.
* Return: integer value of the converted string.
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	char n = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			n = 1;
			result = result * 10 + *s - '0';
		}

		else if (n)
			break;
		s++;
	}

	if (sign < 0)
		result = (-result);

	return (result);
}
