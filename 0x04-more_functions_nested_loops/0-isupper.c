#include "main.h"

/**
*_isupper - checks for uppercase character
*@c:char
*
*Description:function that checks for uppercase character.
*Return: 1,0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
