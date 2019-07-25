#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Principal function
  * @argc: count of arguments
  * @argv: pointer to array of pointers
  * Return: 0 success, 98 num arguments wrong, 100 (/ or %) by 0.
 **/
int main(int argc, char *argv[])
{

	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		 exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	if ((strcmp(argv[2], "+") && strcmp(argv[2], "-") &&
	strcmp(argv[2], "/") && strcmp(argv[2], "*") &&
	strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
	return (0);
}
