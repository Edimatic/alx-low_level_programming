#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, value = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		value *= atoi(argv[j]);
	}
	printf("%d\n", value);
	return (0);
}

