#include "main.h"

/**
* _strcat - Concatenates 2 strings
* @dest:destination char string
* @src:The source char string
* Return:Pointing char to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest != '\0')
	{
	dest++;
	}
while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
*dest = '\0';
return (s);
}
option 2
char *_strcat(char *dest, char *src)
{
int ltd = 0, n;  /* @ltd: length to destination*/
while (dest[ltd])
	{
	ltd++;
	}
for (n = 0; src[n] != 0; n++)
	{
	dest[ltd] = src[n];
	ltd++;
		}
dest[ltd] = '\0';
return (dest);
}
