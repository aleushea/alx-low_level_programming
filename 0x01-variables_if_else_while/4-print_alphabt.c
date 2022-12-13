/*
* File: 4-print_alphabt.c
*/
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: 0 if successful, non-zero otherwise.
 */

int main(void)

{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{

		if (letter != 'e' && letter != 'q')

			putchar(letter);

	}
	putchar('\n');
	return (0);
}