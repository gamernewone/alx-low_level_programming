#include <stdio.h>

/**
 * main - write the alphabet in upper and lower case
 *
 * Return: 0
 */

int main(void)
{
char c, d;

for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}

for (d = 'A'; d <= 'Z'; ++d)
{
putchar(d);
}
putchar('\n');
return (0);
}
