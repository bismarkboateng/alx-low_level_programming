#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks last digit
 *
 * Description: checks the last digit of a number
 *
 * Return: Allways 0 (Success)
 */
int main(void)
{
	int n;
	int LastDigit;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = n % 10;

	if (LastDigit > 5)
	{
		printf("%s %i is %i and is greater than 5\n", str, n, LastDigit);
	} else if (LastDigit == 0)
	{
		printf("%s %i is %i and is 0\n", str, n, LastDigit);
	} else if (LastDigit < 6)
	{
		printf("%s %i is %i and is less than 6 and not 0\n", str, n, LastDigit);
	}
	return (0);
}
