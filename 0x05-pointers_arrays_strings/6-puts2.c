#include "main.h"

/**
 * print_rev - prints input string in reverse
 * @s: input string
 *
 * Return: Void
 */

void puts2(char *str)
{
int count = 0;

while (str[count] != '\0')
{
count++;
}
while (count--)
{
if (count % 2 != 0)
{
_putchar(*str);
}

str++;

}
_putchar('\n');

}
