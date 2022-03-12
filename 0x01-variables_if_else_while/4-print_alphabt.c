#include <stdio.h>

/**
 * main - print lowercase letters
 *
 * Description: prints all lowercase letters except e and q
 *
 * Return: Allways 0 (Success)
 */
int main(void)
{
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e'  && x != 'q')
		{
			putchar(x);
		}
		putchar('\n');
	}

}
