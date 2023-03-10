#include "main.h"

int _prime(int n, int i);

/**
 *is_prime_number - states if number is prime or not
 *@n: number to evaluate
 *Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_prime(n, n - 1));
}

/**
 *_prime - uses recursion to find if number is prime or not
 *@n: number to evaluate
 *@i: iterator
 *Return: 1 if prime, 0 if not
 */
int _prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (_prime(n, i - 1));
}
