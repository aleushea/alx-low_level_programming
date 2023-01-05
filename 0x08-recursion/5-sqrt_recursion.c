#include "main.h"

/**
* sqrt_check - checks if perfect square
* @n: input number whose square root is to be found of
* @root: The number checked to see if it's the sqrt of n
*
* Return: The square root value
*/

int sqrt_check(int n, int root)
{
if (root * root == n)
{
return (root);
}
else if (root >= n / 2)
return (-1);
return (sqrt_check(n, root + 1));
}

/**
* _sqrt_recursion - this function checks for perfect square of a given numb
* @n: Number given to find root of
*
* Return: The square root or -1 if there is no natural square root
*/

int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
else if (n < 0)
return (-1);
else if (n == 0)
return (0);
return (sqrt_check(n, 1));
}
