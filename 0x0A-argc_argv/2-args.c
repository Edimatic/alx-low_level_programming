#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
		printf("%s\n", argv[y]);
	return (0);
}
