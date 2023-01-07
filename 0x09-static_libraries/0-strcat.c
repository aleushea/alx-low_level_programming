#include "main.h"

/**
* _strcat - Concatenates 2 strings
* @dest:destination of the char string
* @src:The source char string
* Return:Pointing char to the resulting string dest
*/

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
