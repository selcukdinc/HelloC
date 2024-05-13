#include <stdio.h>
void findValue(int* num) {
	*num = 39;
}

void findSquare(int* num) {
	int square = *num * *num;
	*num = square;
}

int* findSquareV2(int* num) {
	int square = *num * *num;
	*num = square;
	return num;
}

int* addNum(int* num1, int* num2, int* sum) {
	int sumInside = *num1 + *num2;
	*sum = sumInside;
	return sum;
}

int* pTask(int* num1, int* num2, int* result) {
	*result = *num1 * *num2;
	return result;
}

int pointAndFunc() {
	bolumBasi();
	printf("-- Pointers and Functions (Video25) --\n\n");
	printf("S Y N T A X\n\twe can change the value inside methods with pointer and returned changed value\n\n\tint findValue(int* num){\n\n\t\t*num = 39;\n\n\t}\n\n\t...inside the main function...\n\n\tint number = 43;\n\tprintf(\"before the findValue method, number is : %%d\\n\", number);\n\tfindValue(&number);\n\tprintf(\"after the findValue method, number is : %%d\\n\", number);\n\n");
	
	int number = 43;
	printf("before the findValue method, number is : %d\n", number);
	findValue(&number);
	printf("after the findValue method, number is : %d\n", number);

	// Find the square of a number
	int sqrNum = 6;
	printf("\n\n-- Find the square --\n");
	printf("number is %d\n", sqrNum);
	findSquare(&sqrNum);
	printf("square of %d\n", sqrNum);

	// Return pointers from a function
	int sqrNumV2 = 6;
	printf("\n\n-- Find the square (with return pointer)--\n");
	printf("number is %d\n", sqrNumV2);
	int* result = findSquareV2(&sqrNumV2);
	printf("result is %d\n", *result);

	// add two numbers
	int num1 = 15, num2 = 40, sum;
	int* resultv2;
	printf("\n\n-- Add two number (with return pointer)--\n");
	printf("number1 = %d\nnumber2 = %d\nresult = %d\n", num1, num2, *addNum(&num1, &num2, &sum));

#pragma region programmingTask
	/*
		Create a program to find the multiplication of two numbers using a function and pointers. 
		• Create a function that accepts three pointers. 
		• Inside the function multiply values of two pointers and assign the result to the address of the third pointer. 
		• Inside the main function, create three variables, two variables with values 13 and 9 and the third variable to store their product. 
		• Call the function with addresses of the 3 variables as arguments. 
		• Store the returned value inside a pointer and print the value pointed by the returned address. 
	*/

	printf("\n\n-- Programming Task --\n\n");

	int number1 = 13, number2 = 9, resultV3;

	resultV3 = *pTask(&number1, &number2, &resultV3);
	printf("%d * %d = %d\n\treturned address is %p", number1, number2, resultV3, &resultV3);
#pragma endregion

#pragma region quizAnswer
	
	//Answer is D

#pragma endregion

	bolumSonu();
	return 0;
}

