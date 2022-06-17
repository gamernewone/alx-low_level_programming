/**
 * _strncat - concatenate two string given certain conditions
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bit of character to add
 *
 * Return: the pointer to the final string
 */

char *_strncat(char *dest, char *src, int n)
{

int count = 0;
int i;


for ( ; dest[count] != '\0'; )
{
count++;
}

for (i = 0 ; i < n && src[i] != '\0'; i++)
{
dest[i + count] = src[i];
}

dest[count + i] = '\0';

return (dest);

}
