#include <stdio.h>
/**
 * main-program entry point.
 *
 * Return:0 if no error, non zero if error.
 */
int main(void)
{
	char alphabet;
	int count = 97;

	while (count < 123)
	{
		alphabet = count;
		putchar(alphabet);
		count++;
		if (count == 101 || count == 113)
		{
			count++;
			continue;
		}
	}
	putchar(10);
	return (0);
}
