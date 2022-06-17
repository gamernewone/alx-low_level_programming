/**
 * _strncpy - return arrays
 * @dest: destination string
 * @src: source string
 * @n: the count
 *
 * Return: return pointer
 *
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);

}
