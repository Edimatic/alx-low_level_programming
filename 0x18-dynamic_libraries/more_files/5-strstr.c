#include "main.h"

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: Always return 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *result_value = haystack, *kneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result_value);
		}
		needle = kneedle;
		result_value++;
		haystack = result_value;
	}
	return (0);
}
