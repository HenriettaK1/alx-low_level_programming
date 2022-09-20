#include "main.h"

/**
* _strlen - returns the length a string
* @s: string
* Returns: returns the length a integer;
*/

int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
	 len++;

return (len);
}
