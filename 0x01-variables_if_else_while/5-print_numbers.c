#include <stdio.h>
/**
 * main - prints numbers
 *
 * Description: numbers from zero to ten
 *
 * Return: Allways 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar("\n");

	return (0);
}

