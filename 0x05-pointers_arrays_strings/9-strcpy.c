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

int count = -1;
do {
count++;
dest[count] = src[count];
} while (src[count] != '\0');


return (dest);

}
