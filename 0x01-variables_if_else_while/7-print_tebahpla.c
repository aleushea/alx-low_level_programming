/*
* File: 7-print_tebahpla.c
*/

#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse.
*
* Return: Always 0.
*/

int main(void)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
