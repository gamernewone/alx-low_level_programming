#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

int i;


for (i = 0 ; i < n && src[i] != '\0'; i++)
{
    dest[i] = src[i];
}
dest[i + 1] = src[i];

return (dest);
}
