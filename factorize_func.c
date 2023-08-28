#include "main.h"

/**
 * factorize - Factorize an integer and print the factorization.
 * @n: The integer to be factorized.
 *
 * Description: This function takes an integer as input and
 * prints its factorization in the format "n=p*q".
 */
void factorize(int n)
{
	int divisor = 2;
	int factor1, factor2;

	while (n > 1)
	{
		factor1 = 1;
		factor2 = n;

		while (n % divisor == 0)
		{
			factor1 = divisor;
			factor2 = n / divisor;
			n /= divisor;
			printf("%d=%d*%d\n", n * divisor, factor1, factor2);
		}
		divisor++;
	}
}
