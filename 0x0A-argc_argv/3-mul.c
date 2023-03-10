#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing the result of the multiplication
 *followed by a new line
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
