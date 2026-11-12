#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;
	int a, b;

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
		else if (choice == 1)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a * b);
		}
		else if (choice == 4)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			if (b == 0)
			{
				printf("Error: division by zero\n");
			}
			else
			{
				printf("Result: %.1f\n", (float)a / b);
			}
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
		else
		{
			printf("Feature not implemented yet.\n");
		}
	} while (1);

	return (0);
}
