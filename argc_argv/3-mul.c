#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if fewer or more than two arguments are passed
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
