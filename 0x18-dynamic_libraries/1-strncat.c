#include "main.h"

/**
* _strncat - concatenates two strings into one
* @dest:char dest
* @src: char src
* @n:length limit of concatenation int
* Return:Pointing char to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
	continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
	dest[i + j] = src[j];
	}
dest[i + j] = '\0';
return (dest);
}
