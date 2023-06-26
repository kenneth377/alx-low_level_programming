#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */


void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
