#include "main.h"



char *_strchr(char *s, char c)
{
    int i;
    char *k;

    for(i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) == c)
            k = s + i;
    }

    if(*k != c)
        return (k);

    return (0);

}
