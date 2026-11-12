#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;

	do {
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
		{
			break;
		}

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
		else
		{
			/* Placeholder for arithmetic operations in upcoming tasks */
			printf("Feature not implemented yet.\n");
		}
	} while (1);

	return (0);
}





































