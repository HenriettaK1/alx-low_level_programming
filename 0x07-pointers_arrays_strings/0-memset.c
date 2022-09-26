#include "main.h"

/**
* _memset - fills a memory block with a constant byte
* address to memory block
* @b: char to be used
* Return: memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
