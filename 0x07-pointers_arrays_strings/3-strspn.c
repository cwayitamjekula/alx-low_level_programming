#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, n;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		n = 0;
		while (str2[n] != '\0')
		{
			if (str2[n] == str1[i])
			{
				count++;
				break;
			}

			n++;
		}

		if (s[i] != accept[n])
		{
			break;
		}

		i++;
	}

	return (count);
}
