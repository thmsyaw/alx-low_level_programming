#include <stdio.h>

/**
*main - entry point
*Description: prints all lower case
*letters except e or q
*Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
