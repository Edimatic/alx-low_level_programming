#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
int h = -1, n;
for (n = 0; dest[n] != '\0'; n++)
;

do {
	h++;
	dest[n] = src[h];
	n++;
} while (src[h] != '\0');

return (dest);
}
