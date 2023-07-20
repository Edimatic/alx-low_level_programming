#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - output all numbers with a separator
 * @separator: separe the given numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int k;

va_start(list, n);

for (k = 0; k < n; k++)
{
	printf("%i", va_arg(list, int));
	if (k != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
