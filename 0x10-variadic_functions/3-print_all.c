#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_int - prints integer value
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float value
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints integer value
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string value
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *g = va_arg(list, char *);

	g == NULL ? printf("(nil)") : printf("%s", g);

}

/**
 * print_all - prints any data type value
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int k = 0;
int x = 0;
char *sep = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[k])
{
	x = 0;
	while (x < 4)
	{
		if (*printType[x].type == format[k])
		{
			printf("%s", sep);
			printType[x].printer(list);
			sep = ", ";
			break;
		}
		x++;
	}
	k++;
}

printf("\n");
va_end(list);
}
