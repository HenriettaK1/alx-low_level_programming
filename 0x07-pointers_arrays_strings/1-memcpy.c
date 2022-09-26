#include "main.h"

/**
* _memcpy - copies a memory area
* @dest: memory area to be occupied
* @src: memory area occupied 
* @n: number of bytes taken
* Return: pointer to memory block
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

