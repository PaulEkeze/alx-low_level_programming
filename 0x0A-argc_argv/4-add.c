#include <stdio.h>
#include <stdlib.h>

/**
 * main - will add positive numbers.
 * Print the result, followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: the array of pointers to the arguments
 *
 * Return: if one if the numbers contains symbols that are non-digits 1,
 * else 0
 **/

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{

			printf("Error\n");
			return (1);
			}
		}

		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (0);
}
