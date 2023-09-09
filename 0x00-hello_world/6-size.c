#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	printf("size of a char: %lu bytes(s)", sizeof(char));
	printf("size of a int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
