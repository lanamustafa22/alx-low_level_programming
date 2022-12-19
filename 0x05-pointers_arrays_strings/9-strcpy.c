#include "main.h"

/**
*_strcpy - Copies a string pointed to by @src
*@dest: A buffer to copy the string to
*@src: The source string to copy
*Return: A pointer to the destination string @dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
