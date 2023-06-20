#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int sum = 0;

	while (num1 < 1024)
	{
		if (num1 % 3 == 0 || num1 % 5 == 0)
		{
			sum += num1;
		}

		num1++;
	}
	printf("%i\n", sum);
	return (0);
}
