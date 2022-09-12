#include <stdio.h>

/**
*main - entry point
*Descripsion: prints all single digit numbers of base 10
*starting from 0 using putchar
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
