#include "main.h"
/**
 * _atoi - int
 * @s: pointer
 * Return: Always int.
 */
int _atoi(char *s)
{
	int f;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == '-')
			sig = sig * -1;
		if (s[f] >= '0' && s[f] <= '9')
		{
			res = res * 10;
			res -= (s[f] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
