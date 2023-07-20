#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum all arguments being given
 * @n: int, number of undefined arguments
 *
 * Return: sum of args values
 * On error, 0 is returned at the end
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int z;
unsigned int sum = 0;

va_start(list, n);
if (n != 0)
        for (z = 0; z < n; sum += va_arg(list, unsigned int), z++)
        ;
va_end(list);

return (sum);
}
