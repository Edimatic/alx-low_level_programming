#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @number : number to start from
 * Return:0 or 1
 */

void print_to_98(int number)
{

while (number < 98)
{
	printf("%i, ", number);
	number++;
}
while (number > 98)
{
	printf("%i, ", number);
	number--;
}

printf("98");
putchar('\n');
}
