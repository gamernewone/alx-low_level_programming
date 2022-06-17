char *_strncat(char *dest, char *src, int n){

int count2 = 0;
int i;


for ( ; dest[count2] != '\0'; )
{
count2++;
}

for (i = 0; i < n; i++)
{
dest[i + count2] = src[i];
}

if (!(n > 0))
{
dest[n + count2] = '\0';
}
return (dest);

}
