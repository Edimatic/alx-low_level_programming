#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag, w, ab;

	for (w = 0; str[w] != '\0'; w++)
	{
		flag = 0;

		if (w == 0)
		{
			flag = 1;
		}
		else
		{
			for (ab = 0; sep[ab] != '\0'; ab++)
			{
				if (str[w - 1] == sep[ab])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[w] <= 'z' && str[w] >= 'a')
			{
				str[w] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
