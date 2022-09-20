#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *Print_rev - Print a string in reverse order
 *@s: String in reverse order
 *Return: none
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
