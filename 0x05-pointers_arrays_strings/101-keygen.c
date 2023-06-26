#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int q, add, m;
	int pass[100];

	add = 0;

	srand(time(NULL));

	for (q = 0; q < 100; q++)
	{
		pass[q] = rand() % 78;
		add += (pass[q] + '0');
		putchar(pass[q] + '0');
		if ((2772 - add) - '0' < 78)
		{
			m = 2772 - add - '0';
			add += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
