#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the digits of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char X;

for (X = '0'; X <= '9'; ++X)
putchar(X);
for (X = 'a'; X <= 'f'; ++X)
putchar(X);

putchar('\n');

return (0);
}
