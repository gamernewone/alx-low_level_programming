/**
 * _puts - Print a char
 * @str: the string to write
 *
 * Return: Nothing
 */

void _puts(char *str)
{

char character = *str;
for ( ; character != '\0'; character = *++str)
{

_putchar(character);

}

}
