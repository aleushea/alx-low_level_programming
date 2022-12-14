/*
* File: 7-print_last_digit.c
*/
#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @n - The number in question.
*
* Return: Value of the last digit.
*/
int print_last_digit(int num)
{
if (num < 0)
num = -num;
_putchar((num % 10) + '0');
return (num % 10);
}
