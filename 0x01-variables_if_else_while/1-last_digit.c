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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int LastDigit;

	LastDigit = n % 10;

	if (LastDigit > 5)
	{
		printf("Last digit of %i is %i, and is greater than 5\n",n, LastDigit)
	} else if (LastDigit == 0)
	{
		printf("Last digit of %i is %i, and is 0\n",n, LastDigit)
	} else if (LastDigit < 6 && LastDigit != 0)
	{
		printf("Last digit of %i is %i, and is less than 6 not 0\n",n, LastDigit)
	}
	return (0);
}
