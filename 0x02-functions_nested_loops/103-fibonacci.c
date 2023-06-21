#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even  number < 4,000,000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, value = 0;
	int sum = 0;

	while (value < 4000000)
	{
		value = x + y;
		x = y;
		y = value;
		if (value % 2 == 0)
			sum += value;
	}
	printf("%i\n", sum);
	return (0);
}
