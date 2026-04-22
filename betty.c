#include <stdio.h>

/**
 * add_integers - Adds two integers and returns the result.
 * @a: The first integer to add.
 * @b: The second integer to add.
 *
 * Return: The sum of a and b.
 */
int add_integers(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry point of the program.
 *
 * Description: Demonstrates a Betty-compliant function call.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int sum;

	sum = add_integers(5, 10);
	printf("The sum is: %d\n", sum);

	return (0);
}
