#include <stdio.h>
/**
  * main - outputs a hexadecimal string
  *
  * Return: Always 0(Success)
  */
int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}


	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}

	putchar('\n');



	return (0);
}
