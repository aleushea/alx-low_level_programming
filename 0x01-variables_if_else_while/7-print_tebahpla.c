/*
* File: 7-print_last_digit.c
*/
#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @n: The number in question.
*
* Return: Value of the last digit.
*/

int print_last_digit(int n)

{
if (n < 0)
n = _abs(n);
int last_digit = n % 10;
_putchar((n % 10) + '0');
return (n % 10);
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
