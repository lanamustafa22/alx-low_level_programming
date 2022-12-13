#include "main.h"

/**
*print_alphabet_x10 - print alphabet 10 times
*
*Description: print alphabet 10 timeis
*Return void
*
*/
void print_alphabet_x10(void)
{
int time = 0;
char letter = 'a';
while (time < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
time++;
}
}
