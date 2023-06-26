#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int v;
	int lees = 0;
	int far = -1;
	int gee = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] == '-')
			far = far * -1;
		if (s[v] >= '0' && s[v] <= '9')
		{
			lees = lees * 10;
			lees -= (s[v] - '0');
			gee = 1;
		}
		else if (gee == 1)
			break;
	}
	lees = far * lees;
	return (lees);
}
