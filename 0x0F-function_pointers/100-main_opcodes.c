#include "function_pointers.h"

/**
 *main -  prints the opcodes of its own main function.
 *@argc: integer value for agument count
 *@argv: character value for argument vector
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int v;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (v = 0; v < atoi(argv[1]) - 1; v++)
		printf("%02hhx ", ((char *)main)[v]);
	printf("%02hhx\n", ((char *)main)[v]);
	return (0);
}
