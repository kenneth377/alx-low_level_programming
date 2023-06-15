#include <stdio.h>
/**
 * main - is a C code which outputs the sizes of inbuilt types of data
 *
 *Return: 0 (Success)
 *
 */

int main(void)
{
	printf("Size of a char: %lu\n byte(s)", (unsigned long)sizeof(char));
	printf("Size of a int: %lu\n byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu\n byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu\n byte(s)", (unsigned long)sizeof(float));
	return (0);
}
