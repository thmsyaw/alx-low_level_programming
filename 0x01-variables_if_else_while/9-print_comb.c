#include <stdio.h>

/**
*main -entry point
*Description :prints numbers in acsending order
*with commas btwn them
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
