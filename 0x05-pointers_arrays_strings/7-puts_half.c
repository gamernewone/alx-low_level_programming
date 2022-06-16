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

half = count / 2;


if (count % 2 == 0)
{

while (half < count)
{
_putchar(str[half]);
half++;
}
}

else
{

while (half < count){
_putchar(str[half]);
half++;
if (half == (count - 1))
{
int n = (count - 1) / 2;
_putchar(str[n]);
}
}
}

}
