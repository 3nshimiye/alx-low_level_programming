#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're the best! and yes, you will achieve your goals");
	printf(",\nDon't loose hope, stay in your way, God and beautiful people will find you there!\n");
}
