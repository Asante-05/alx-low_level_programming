#include<stdio.h>
/**
 * main is for the entry point of the program
 *
 * return 0 is no error, non zero if there is an error
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long: %ld byte(s)\n", sizeof(long));
	printf("Size of a lomg long int %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
