#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string from a to b
 * @dest: destination
 * @src: string
 *
 * Return: the destination pointer
 */

char *_strcpy(char *dest, char *src)
{
int count;
int count2;

for (count = 0 ; src[count] != '\0' ; count++)

count += 1;

for (count2 = 0; count2 < count; count2++)
{
dest[count2] = src[count2];
}

return (dest);

}
