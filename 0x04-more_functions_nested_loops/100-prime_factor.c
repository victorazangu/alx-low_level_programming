#include <stdio.h>
#include <math.h>

/**
 * main - is a functionthat prints prime factor of the number 612852475143
 * followed by a new line.
 * Description : prints the largest prime factor
 * Return: 0 Always  (Success)
*/

int main(void)
{
	long int m, n, i;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			m = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		m = n;
	}
	printf("%ld\n", m);

	return (0);
}
