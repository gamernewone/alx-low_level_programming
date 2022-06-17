<<<<<<< HEAD
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
=======
char *_strncat(char *dest, char *src, int n){
>>>>>>> d8152bbcf0727e7a7859f49e4f9daa733325e1b4

int count2 = 0;
int i;


for ( ; dest[count2] != '\0'; )
{
count2++;
}

<<<<<<< HEAD
for (i = 0 ; i < n ; i++)
=======
for (i = 0; i < n; i++)
>>>>>>> d8152bbcf0727e7a7859f49e4f9daa733325e1b4
{
dest[i + count2] = src[i];
}

if (!(n > 0))
{
dest[n + count2] = '\0';
}
return (dest);

}
