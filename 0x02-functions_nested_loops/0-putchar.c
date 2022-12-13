#include "main.h"

/**
*main- prints _putchar
*
*Description: prints _putchar
*
*Return: 0 (Success)
*/
int main(void)
{
char word[10] = "_putchar"
 int i = 0;
for (i = 0; i < 9; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}
