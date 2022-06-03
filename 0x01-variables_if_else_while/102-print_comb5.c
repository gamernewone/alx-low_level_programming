# include <stdio.h>
/**
 * main - print the 9 first digit
 *
 * Return: 0
 */

int main(void)
{
int c, d, e, f;
int g = 0;
int h = 0;
int k = 0;
int i = 0;

for (c = 0; c < 10; ++c)
{
for (d = 0 + g; d < 10; ++d)
{

for (e = 0 + h; e < 10; ++e)
{

for (f = 0 + i; f < 10; ++f)
{
putchar('0' + c % 10);
putchar('0' + d % 10);
putchar(' ');
putchar('0' + e % 10);
putchar('0' + f % 10);

if (c != 9)
{
putchar(',');
putchar(' ');
}

}

}

}

g = g++;
k = k++;
h = h++;
i = i++;
}
putchar('\n');
return (0);
}
