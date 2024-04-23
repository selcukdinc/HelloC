#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int recursion(){ 
	bolumBasi();
	printf("-- Recursion (Video18) --\n\n");
	int number, result;
	printf("S Y N T A X\n\tIf function inside calling self again, this functions is recursive functions...\n\tvoid recurse(){\n\t     ...\n\t     recurse();\n\t     ...\n\t}\n");
	printf("Enter pozitive integer number: ");
	scanf("%d", &number);
	result = sum(number);
	printf("sum = %d\n\n", result);


	printf("-- Programming Task --\n");
	int num, resultv2;
	printf("Enter pozitive integer number: ");
	scanf("%d", &num);
	resultv2 = factorial(num);
	printf("factorial = %d", resultv2);
	bolumSonu();
	return 0;
}

int sum(int n) {
	if (n != 0)
		return n + sum(n - 1);
	else
		return n;
}

#pragma region programmingTask

	/*Create a program that computes the factorial
	of a number.
	• Take input from user
	• Pass the input value to a function.
	• Inside the function check if the number is
	greater than O.
	• If true, return number multiplied by a
	recursive call to the function with
	parameter 1 less than number
	Otherwise, return 1. */

int factorial(int n) {
	if (n != 0) {
		if (n < 1)
			return 1;
		return n * factorial(n - 1);
	}else
		return 1;
}

#pragma endregion

#pragma region quizAnswer
// Answer is B
#pragma endregion
