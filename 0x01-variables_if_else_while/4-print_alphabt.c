# include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: nothing
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
return (0);
}
