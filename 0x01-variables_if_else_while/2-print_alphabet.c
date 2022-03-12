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
	int a = 'a';

	do {

		putchar(a);
		a++;

	} while (a <= 'z');
	putchar('\n');

	return (0);
}

