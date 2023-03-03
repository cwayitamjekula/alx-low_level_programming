#include "main.h"
/**
*_strncpy - a function that copies a string.
*at most n bytes of src are copied.
*if length of src is < n, additional null bytes are written to dest
*to ensure that a total of n bytes are written.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: number of bytes to be used.
*
* Return: pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int bytes;

for (bytes = 0; bytes < n && src[bytes] != '\0'; bytes++)
dest[bytes] = src[bytes];
for (; bytes < n; bytes++)
dest[bytes] = '\0';

return (dest);
}
