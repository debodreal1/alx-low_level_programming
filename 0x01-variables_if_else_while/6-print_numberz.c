#include <stdio.h>

/**
 * main - print the althabet in reveerse
 * Return: Always 0
 */
nt main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
