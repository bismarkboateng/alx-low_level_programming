#include <stdio.h>
/**
 * main - prints alphabets
 *
 * Description: prints lowercase alphabets
 *
 * Return: Allways 0 (Success)
 */

int main(void)
{
	for(int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

