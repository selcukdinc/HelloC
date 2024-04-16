#include <stdio.h>
#include <math.h>
 
void greet() {
	printf("Good Morning\n");
}

void calculateSquare(int number) {
	printf("Square of %d is %d",number, number * number);
}

void addNumbers(int number1, int number2){
	printf("sum of %d and %d is %d", number1, number2, number1 + number2);
}

int addNumbersV2(int number1, int number2) {
	return number1 + number2;
}

#pragma region programmingTask
//Can you create a function that
//	• takes two numbers
//	• performs the multiplication of two numbers
//	• returns the result
double multi(double num1, double num2) {
	return num1 * num2;
}
// Aswer is C
#pragma endregion


int functions(){ 
	bolumBasi();
	printf("-- C Functions (Video15) --\n\n");

	printf("S Y N T A X\n\treturnType functionName(){\n\t\t...\n\t\t...\n\t}\n");
	
	greet();
	greet();
	greet();
	printf("After function call\n");

	calculateSquare(12);

	addNumbers(1, 3);

	printf("\n%d\n", addNumbersV2(2,3));

	printf("#include <math.h>\naccess math functions,\n\t-- example of square root\nreturn type float\nsyntax: sqrt(number is u want square root);\n");
	printf("sqrt(25) = %f\n", sqrt(25));

	printf("\n-- ProgrammingTask -- \nmultiplication 8 and 7, result is %lf", multi(8,7));

#pragma region quizAnswer
	// Aswer is C
#pragma endregion
	bolumSonu();
 return 0;
}

