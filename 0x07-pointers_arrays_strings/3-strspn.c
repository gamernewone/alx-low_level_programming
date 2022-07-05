#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int k, t;
    unsigned int count = 0, dre = 0;

    for (k = 0; *(s + k) != '\0' && (*(s + k)) != 32; k++)
    {
        for (t = 0; (*(accept + t)) != '\0'; t++)
        {
            if ((*(s + k)) == (*(accept + t)))
                count++;

        }
        dre++;
        if (dre != count)
            break;

    }

    return(count);

}
