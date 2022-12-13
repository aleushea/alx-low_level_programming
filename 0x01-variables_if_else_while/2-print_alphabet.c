/**
* File: 2-print_alphabet.c
* this script is from me
*/
#include <stdio.h>
/**
* Main - function
* 
* Return: 0 if successful, non-zero otherwise.
* Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);


	putchar('\n');

	return (0);

}
