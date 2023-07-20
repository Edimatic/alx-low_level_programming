#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - output all strings with a separator
 * @separator: separe the given strings
 * @n: int, number of undefined arguments on the program
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int q;
char *c;
va_start(list, n);

for (q = 0; q < n; q++)
{
	c = va_arg(list, char*);
	if (c != NULL)
		printf("%s", c);
	else
		printf("(nil)");

	if (q != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
