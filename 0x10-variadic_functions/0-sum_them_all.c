#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all contained parameters
 * @n: stand for a number of parameters
 * @...: an extension of numbers to calculate their summation
 * return : The function will return the sum of all parameters
 * 	     if n != 0 - 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
