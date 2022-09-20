#include <stdio.h>
#include "main.h"

/**
*_puts - print a string for this
*@str string to print
*
*Description: print a string 
*successful: return with right result
*/
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + 1));
i++;
}
putchar(10);
}
