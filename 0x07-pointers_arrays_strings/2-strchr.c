#include "main.h"

/**
* _strchr - locates a charecter in a string
* @s: string to check
* @c: character to check for
* Return: pointers within c or null
*/
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
