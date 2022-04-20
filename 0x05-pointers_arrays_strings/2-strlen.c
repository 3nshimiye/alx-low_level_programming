#include "main.h"

/**
 * _strlen - print the length of a string
 * @s: pointer to check the string
 * return: void 
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
