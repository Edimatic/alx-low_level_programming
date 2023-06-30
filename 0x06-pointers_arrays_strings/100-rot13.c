#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 * @s: pointer pointed to the variable s , of type character
 * Return: Pointer P , pointed to the variable s of type char.
 */
char *rot13(char *s)
{
	int i;
	char *p = s;

	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*s == original[i])
			{
				*s = code[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}
