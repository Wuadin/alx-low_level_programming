#include <stdio.h>

/**
 * main - Ecrire les nombres de 0 à 9
 *
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
