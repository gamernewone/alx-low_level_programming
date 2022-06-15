
/**
 * _strlen - Return the lenght of a string
 * @s: the string
 *
 * Return: the number of string counted
 */

int _strlen(char *s)
{

int i = 0;
for (char character = *s; character != '\0'; character = *++s)
{
i++;
}

return (i);
}
