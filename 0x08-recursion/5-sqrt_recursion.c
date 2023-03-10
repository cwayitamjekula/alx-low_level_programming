#include "main.h"

int root_recursion(int n, int i);

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: number whose square root will be calculated
 *Return: resulting square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (root_recursion(n, 0));
}

/**
 *root_recursion - natural square root of number
 *@n: number whose root to be calculated
 *@i: iterator
 *Return: resulting square root
 */
int root_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (root_recursion(n, i + 1));
}
