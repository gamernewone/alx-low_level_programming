# include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: nothing
 */

int main(void)
{
char c;
int d;

for (d = 0; d < 10; ++d)
{
putchar('0' + d % 10);
}


for (c = 'a'; c <= 'f'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
