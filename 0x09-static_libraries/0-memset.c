#include <stdio.h>
#include "main.h"

/**
*_memset - it is a function that fills memory with a constant byte
*
*@s: for the area of memory to be filled
*@b: for the character to fill the area with
*@n: for the number of bytes to fill
*Return: char*
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
