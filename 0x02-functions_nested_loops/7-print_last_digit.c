/*
* File: 7-print_last_digit.c
*/

#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* print_last_digit - prints
*
* @n: - The number in question.
* Return: Value of the last digit.
*/

int print_last_digit(int n)
{
if (n < 0)
n = -n;
_putchar((n % 10) + '0');
return (n % 10);
}
