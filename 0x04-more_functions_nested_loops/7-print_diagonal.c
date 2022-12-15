#include "main.h"

/**
*print_diagonal - draws diagonal line
*@n:  number of times the character \ should be printed
*
*Return: void
*/
void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (i < 1)
_putchar('\n');
}
