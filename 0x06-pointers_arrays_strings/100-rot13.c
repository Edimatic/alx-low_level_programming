#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int q, jj;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (q = 0; jj < 54; jj++)
		{
			if (((s[q] <= 'z' && s[q] >= 'a') || (s[q] <= 'Z' && s[q] >= 'A'))
			&& s[q] == input[jj])
			{
				s[q] = output[jj];
				break;
			}
		}
	}
	return (s);
}

