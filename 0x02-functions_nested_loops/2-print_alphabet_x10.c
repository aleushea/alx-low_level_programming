/*
* File: 2-print_alphabet_x10.c
*/

#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/

void print_alphabet_x10(void)

{
int count = 0;
char alphabets;
while (count++ <= 9)
{
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
_putchar(alphabets);
_putchar('\n');
}
}
