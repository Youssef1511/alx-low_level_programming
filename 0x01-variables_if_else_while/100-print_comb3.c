#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible different
 *		combinations of two digits.
 * 
 * Return: ALways 0 (sucess)
*/

int main(void)
{
	int digit = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);

				if (di
