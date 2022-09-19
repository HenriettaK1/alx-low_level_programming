#include "main.h"

/**
*swap_int - swap the value of the two integers
*
*@a: int 1
*@b: int 2
*Return: empty
*/
void swap_int(int *a, int *b)
{
int alx;

alx = *a;
*a = *b;
*b = alx;
}
