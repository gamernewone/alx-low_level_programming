#include "main.h"
/**
 * puts_half - print half of the string
 *
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{

int count = 0;
int half;

while (str[count] != '\0')
{
count++;
}

if (count % 2 == 0)
{

half = count / 2;

}

else
{

half = ((count - 1) / 2) + 1;
}

while (half < count)
{
_putchar(str[half]);
half++;
}

_putchar('\n');

}
