#include <stdio.h>
#include <math.h>

#define PI 3.1415
#define circleArea(r)(PI* r * r)
#define squareRoot(n)(sqrt(n))
int preprocAndMacros() {
	bolumBasi();
	printf("-- Preprocessor and Macros (Video30) #define PI 3.1415\n\tPI is macro\n\n");
	printf("S Y N T A X\n\t__\n");
	
	int number = 36, number2 = 125;

	double squareRoot = sqrt(number), cubeRoot = cbrt(number2);
	
	printf("squareroot is %.2lf\ncuberoot is %.2lf\n", squareRoot, cubeRoot);

	printf("%.4lf\n", PI);

	double radius = 12.4;
	double area;
	//double area = PI * radius * radius;

	area = circleArea(radius);

	printf("%.2lf\n", area);
#pragma region programmingTask
	/*
	
		Create a program to find the square root
		of a number using the sqrt() function and
		macro together.
		• Include the math.h header file.
		• Define a macro function squareRoot(n).
		• Inside the main function, use the
		squareRoot() macro to compute the
		square root

	*/
	printf("\n\n-- Programming Task --\n\n");
	int numTask = 121;
	double result = squareRoot(numTask);
	printf("%d suqareRoot is %.2lf", numTask, result);
#pragma endregion

#pragma region quizAnswer
	
	//Answer is C

#pragma endregion

	bolumSonu();
	return 0;
}