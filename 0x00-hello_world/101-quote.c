#include <stdio.h>
#include <unistd.h>

/**
 * main - is a C code which prints a line to the standard error
 *
 *Return: 1 (Success)
 *
 */


int main(void)
{
	char n[] = "Dora Korpar";

	fputs("and that piece of art is useful\" -%s, 2015-10-19\n", n, stdout);
	return (1);
}
