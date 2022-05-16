#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Author: Emmanuel Nshimiyimana
 * Desc: Prototypes of all functions and prototype of the function _putchr
 * 	 needed for 0x10-variadic_functions dir .
 */

#include <stdarg.h>

/*
 * File: variadic_functions.h
 * @repres: To represent data type.
 * @print: A function pointer to a function that prints the data type correlating to the repres.
 */

typedef struct printer
{
	char *repres;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
