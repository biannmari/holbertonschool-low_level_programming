#include "main.h"

/**
* _abs - computes the absolute value of an integer.
*
* @n: the integer to compute the absolute value of
*
* Return: zero
*/

int _abs(int n)

{
if (n < 0)
return -n;
else
return n;

{
    int n = -5;
    int result;

    result = _abs(n);
    printf("The absolute value of %d is %d\n", n, result);

    return 0;
}
}
