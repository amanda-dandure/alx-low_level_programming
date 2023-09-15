#include <stdio.h>

/**
 * main - point of entry
 * Description: A program that prints num 1 - 100 where
 * Fizz for multiples of 3, Buss for mutiples of 5, and
 * FizzBuzz or multiples of the both
 * Return: 0 Success
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
