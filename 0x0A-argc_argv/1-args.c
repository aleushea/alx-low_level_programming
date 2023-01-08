#include <stdio.h>
#include "main.h"

/**
* main - Prints the number of arguments passed into main followed by a new line
* @argc: The number of arguments
* @argv: The list of array
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;
if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++)
printf("%d\n", i - 1);
}
return (0);
}
