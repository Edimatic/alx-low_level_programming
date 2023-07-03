#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept) 
{
    unsigned int length = 0;
    int found;

    while (*s) {
        found = 0;
        for (char *p = accept; *p; p++) {
            if (*s == *p) {
                found = 1;
                break;
            }
        }
        if (!found) {
            break;
        }
        length++;
        s++;
    }

    return length;
}
