/**
 * malloc_checked - memory allocated
 * @b: memory size
 * Return: SUCCESS for pointer to the allocated memory
 * 98 if in case of insufficient memory
 */

#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
