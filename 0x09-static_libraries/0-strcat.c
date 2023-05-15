#include "main.h"
#include <stdio.h>
/**
 * *_strcat - it concatenates two strings
 * @dest: the pointer destination
 * @src: the pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
