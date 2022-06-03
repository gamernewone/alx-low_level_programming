# include <stdio.h>
/**
 * main - print the 9 first digit
 *
 * Return: 0
 */

int main(void)
{
int c, d;
int h = 0;

for (c = 0; c < 10; ++c)
{
for (d = 1 + h; d < 10; ++d)
{
putchar('0' + c % 10);
putchar('0' + d % 10);
if (c != 9 && h != 8)
{
putchar(',');
putchar(' ');
}
}
h = h + 1;
}
putchar('\n');
return (0);
}
