#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: Always return *dest
 */

int _strcmp(char *s1, char *s2)
{
	int Q;
	int V;

	Q = 0;

	while (s1[Q] == s2[Q] && (s1[Q] != '\0' || s2[Q] != '\0'))
	{
		Q++;
	}
	V = s1[Q] - s2[Q];
	return (V);
}
