#include "main.h"

/**
 * rev_string - reverses string
 *@s: the pointer
 *
 */

void rev_string(char *s)
{
int count, count2;
char *start, *end, ch;

count = 0;
start = s;
end = s;

while (*end != '\0')
{
end++;
count++;
}

for (count2 = 0; count2 < (count / 2); count2++)
{
ch = *end;
*end = *start;
*start = ch;
start++;
end--;
}
}
