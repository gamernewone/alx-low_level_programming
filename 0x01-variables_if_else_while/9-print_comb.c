# include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: nothing
 */

int main(void)
{
int c;

for (c = 0; c < 10; ++c)
{
putchar('0' + c%10);

if (c != 9)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
