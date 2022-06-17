#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{

int count = 0;
int count2 = 0;
int i;

for ( ; src[count] != '\0'; )
{
    count++;
}

for ( ; dest[count2] != '\0'; )
{
    count2++;
}

for (i = 0; i < count; i++)
{
    dest[i + count2] = src[i];
}

dest[count + count2] = '\0';

return dest;

}
