#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

	int col, z, right;
	char temp;

	for (col = 0; s[col] != '\0'; col++)
	;

	z = 0;

	right = col / 2;

	while (right--)
	{
		temp = s[col - z - 1];
		s[col - z - 1] = s[z];
		s[z] = temp;
		z++;
	}

}
