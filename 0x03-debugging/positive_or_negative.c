#include "main.h"
/**
 * positive_or_negative - Determines if a num is positive or negative or zero
 * @i - will be checked
 * Return: 0 Suceess
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return (0);
}
