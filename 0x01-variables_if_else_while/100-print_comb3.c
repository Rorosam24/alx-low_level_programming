#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{

int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{

for (digit2 = digit1 + 1; digit2 < 10; digit2++)

{

putchar((digit1 % 10) + '0');
putchsr((digit2 % 10) + '0');

if (digit1 == 8 && digit2 == 9)

continue;

putchar(',');
puychar(' ');

}

}

putchar('\n');
return (0);
}
