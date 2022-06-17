#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 strings
 * @s1: first char
 * @s2: second char
 *
 * Return: negative, positive or null value
 */
int _strcmp(char *s1, char *s2)
{

int count = 0, count2 = 0, i, fcount, a = 0, b = 0;

for ( ; s1[count] != '\0'; count++)
;

for ( ; s2[count2] != '\0'; count2++)
;
fcount = (count > count2) ? count : count2;

for (i = 0; i < fcount && (s1[i] != '\0' && s2[i] != '\0'); i++)
{
if (s1[i] > s2[i])
a++;

else if (s1[i] < s2[i])
b++;

}
if (a > b)
return (15);

if (a < b)
return (-15);

else
return (0);
}
