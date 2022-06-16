#include "main.h"

/**
 * rev_string - reverses string
 *@s: the pointer
 *
 */

void rev_string(char *s)
{
int count, count2, i;
char *end, ch;

i = 0;
count = 0;
end = s;

while (*end != '\0')
{
end++;
count++;
}

for (count2 = 0 ; count2 < (count / 2) ; count2++)
{
ch = s[i];
s[i] = s[count - i - 1];
s[count - i - 1] = ch;

i++;
}
}
