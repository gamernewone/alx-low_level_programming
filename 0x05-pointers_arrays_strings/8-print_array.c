#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: the array adress
 * @n: the number of element in the array
 */
void print_array(int *a, int n)
{

int k;

for (k = 0 ; k < n ; k++)
{
printf("%d", *(a + k));
if (k != (n - 1))
{
printf(", ");
}
}
printf("\n");

}
