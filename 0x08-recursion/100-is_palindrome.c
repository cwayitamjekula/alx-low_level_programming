#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_rec(char *s);

/**
 *is_palindrome - checks if string is a palindrome
 *@s: string to reverse
 *Return: 1 if palindroome, 0 if not
 */

int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (_pal(s, 0, _strlen_rec(s)));
}
/**
 *_strlen_rec - returns string length
 *@s: length to be calculated
 *Return: string length
 */
int _strlen_rec(char *s)
{
if (*s == '\0')
return (0);
return ( 1 + _strlen_rec(s + 1));
}

/**
 *_pal - checks characters for palindrome
 *@s: string to be checked
 *@i: iterator
 *@len: string length
 *Return: 1 if palindrome, 0 if not
 */
int _pal(char *s, int i, int len)
{
if (*(s + 1) != *(s + len -1))
return (0);
if (i >= len)
return (1);
return (_pal(s, i + 1, len - 1));
}
