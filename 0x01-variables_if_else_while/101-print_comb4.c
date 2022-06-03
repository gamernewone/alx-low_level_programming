# include <stdio.h>
/**
 * main - print the 9 first digit
 *
 * Return: 0
 */

int main(void)
{
int c, d, e;
int h = 0;
int k = 0;
int l = 0;

for (c = 0; c < 10; ++c)
{
for (d = 1 + h; d < 10; ++d)
{
for (e = 2 + k; e < 10; ++e)
{
putchar('0' + c % 10);
putchar('0' + d % 10);
putchar('0' + e % 10);

if (c != 9 && h != 8 && l != 7)
{
putchar(',');
putchar(' ');
}
}

k = ++k;
}
l = ++l;
k = l;
h = ++h;

}
putchar('\n');
return (0);
}
