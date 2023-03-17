#include <stdio.h>

/**
 * main - this is a C code
 *
 * Return: 0 when sucessful
 */

int main(void)
{
	printf("Size of Char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
	return (0);
}
