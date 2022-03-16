#include "main.h"

/**
 *  * largest_number - returns the largest of 3 numbers
 *   * @a: first integer
 *    * @b: second integer
 *     * @c: third integer
 *      * Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int control;
	int largest;

	if (a > b)
	{
		control = a;
	}
	else
	{
		control = b;
	}
	if (control > c)
	{
		largest = control;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
