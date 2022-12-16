#include "main.h"

/**
* _isupper - a function that checks for uppercase character
* @c: is an input
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
char capital = 'A';
int isupper = 0;
for (; capital <= 'Z'; capital++)
{
if (c == capital)
{
isupper = 1;
break;
}
}
return (isupper);
}
