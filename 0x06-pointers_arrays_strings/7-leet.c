#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int q, kk;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (kk = 0; kk < 5; kk++)
		{
			if (s[q] == s1[kk] || s[q] == S1[kk])
			{
				s[q] = s2[kk];
				break;
			}
		}
	}
	return (s);
}

