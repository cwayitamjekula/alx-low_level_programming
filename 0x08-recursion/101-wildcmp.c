#include "main.h"
#include <string.h>

/**
 *wildcmp - compares two strings
 *@s1: pointer to char
 *@s2: pointer to char
 *Return: returns pointer
 **/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
return (wildcmp(s1, s2 + 1));
else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);

return (0);
}
