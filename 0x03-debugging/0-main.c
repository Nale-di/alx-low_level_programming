#include "main.h"

/**
 * main - Entry point
 *
 * Description: Tests a function that prints if an integer is positive or negative
 *
 * Return: 0
 */
int main(void)
{
    int i;

    i = 98;
    positive_or_negative(i);

    return (0);
}

/**
 * positive_or_negative - Determines if an integer is positive, negative, or zero
 * @n: The integer to be checked
 *
 * Return: No return value
 */
void positive_or_negative(int n)
{
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n < 0)
        printf("%d is negative\n", n);
    else
        printf("%d is zero\n", n);
}
