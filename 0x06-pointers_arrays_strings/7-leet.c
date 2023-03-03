#include <stdio.h>
#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int sCount, lCount;
	char leetL[] = "aAeEoOtTlL";
	char leetN[] = "4433007711";

/*  scan through string */
	sCount = 0;
	while (s[sCount] != '\0')
/* check whether leetLetter is found */
	{
		lCount = 0;
		while (lCount < 10)
		{
			if (leetL[lCount] == s[sCount])
			{
				s[sCount] = leetN[lCount];
			}
			lCount++;
		}
		sCount++;
	}
	return (s);
}
