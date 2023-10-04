#include "main.h"
#include "stdlib.h"

/**
 * argstostr - Function that concatenates all the arguments of your program
 * @ac: This is the argument count
 * @av: This is the argument vector
 * Return: A pointer to the array of char
 */

char *argstostr(int ac, char **av)
{
char *aout;
int a, b, c = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
len++;
}
len += ac;

aout = malloc(sizeof(char) * len + 1);
if (aout == NULL)
return (NULL);

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
aout[c] = av[a][b];
c++;
}
if (aout[c] == '\0')
{
aout[c++] =  '\n';
}
}
return (aout);
}
