 * Return: 0
 */

int main(void)
{
int c, d, e, f;
int h = 0;

for (c = 0; c < 10; ++c)
{
for (d = 0 + h; d < 10; ++d)
{

for (e = 0; e < 10; ++e)
{

for (f = 1; f < 10; ++f)
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

h = h + 1;
}

}
putchar('\n');
return (0);
}