#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function file
 * @argc: number of lines arguments
 * @argv: array of elements given
 * Return: 0 always after execution
 */

int main(int argc, char *argv[])
{
	int Q;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	Q = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", Q);

	return (0);
}
