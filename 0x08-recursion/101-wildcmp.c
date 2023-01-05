#include <stdio.h>
#include "main.h"

/**
* wildcmp - this function Compares 2 strings returns 1 if they are identical
* @s1: Input Char or String being compared
* @s2: Input Char or String being compared that can contain special character *
*
* Return: 1 if considered identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
