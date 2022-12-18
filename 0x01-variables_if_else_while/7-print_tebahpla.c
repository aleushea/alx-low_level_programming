/*
* File: 7-print_tebahpla.c
*/

#include <main.h>

/**
* main - Prints the lowercase alphabet in reverse.
*
* Return: Always 0.
*/

int print_last_digit(int n)

{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
