#include "main.h"
#include  <stdio.h>
/**
 * _strcpy - copyies the string
 * dest: destination
 * @src: source
 * Return: the pointdest: destination 
 */
char *_strcpy(char *dest, char *src)
{
int count = 0;
while (count >= 0)
{
*(dest + count) = *(src + count); 
if (*(src + count) == '\0              return (dest); 
    break
count++;
}
return (dest);
}
