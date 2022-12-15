#include "main.h"

/**
*print_square - prints a square, followed by a new line
*@size: int
*
*Return: 0
*/
void print_square(int size)
{
int r, c;
for (r = 0; r < size; r++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
