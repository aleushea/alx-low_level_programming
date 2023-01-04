#include "main.h"
int squareroot(int n, int i);
/**
* _sqrt_recursion - this function - checks for perfect square
* @n: input
* Return: Always 0 (Success)
*/

int _sqrt_recursion(int n)

{
if (n < 0)
return (-1);
else
return (squareroot(n, (n + 1) / 2));
}

/**
* squareroot - checks if perfect square
* @n: input
* @i: counter
* Return: returns the natural square root of a number.
*/

int squareroot(int n, int i)

{
if (i < 1)
return (-1);
else if (i * i == n)
return (i);
else
return (squareroot(n, i - 1));
}
