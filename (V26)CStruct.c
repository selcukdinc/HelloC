#include <stdio.h>

struct Person
{
	int age;
	double salary;
};// if we define here 
	// person1, person2
	// we dont need main func create a var...

typedef struct Complex {
	double real, imagine;
}complex;

int cStruct() {
	bolumBasi();
	printf("-- C Struct (Video26) --\n\n");
	printf("S Y N T A X\n\t\\\\Outside the main func\n\tstruct Person{\n\t\tdouble salary;\n\t\tint age;\n\t};\n\n-- Createing a variable\n\t\\\\inside main func\n\tstruct Person person1;\n\tperson1.age = 25;\n\tperson1.salary = 25000.552;\n\n-- typedef in Struct --\n\t\\\\Outside the main func\n\ttypedef struct Person{\n\t\tdouble salary;\n\t\tint age;\n\t} person;\n\n-- Createing a variable\n\t\\\\inside main func\n\tperson person1;\n\n\n");
	
	// one line
	struct Person person1 = { .age = 25, .salary = 4321.78 };
	struct Person person2;
	
	printf("Age of person1 : %d\n", person1.age);
	printf("salary of person1 : %.2lf\n", person1.salary);

	// multiple lines
	person2.age = 45;
	person2.salary = 76045.32;

	printf("Age of person2 : %d\n", person2.age);
	printf("salary of person2 : %.2lf\n", person2.salary);

	// Sum of Complex Numbers
	complex c1 = { .real = 21.87, .imagine = 30 };
	complex c2 = { .real = 13.34, .imagine = 112.23 };

	complex sum = { .real = c1.real + c2.real, .imagine = c1.imagine + c2.imagine };
	printf("c1 = %.2lf + %.2lfi\nc2 = %.2lf + %.2lfi\nResult is %.2lf + %.2lfi\n", c1.real, c1.imagine, c2.real, c2.imagine, sum.real, sum.imagine);


#pragma region programmingTask
	/*
		Create a program to find the differences 
		between three complex numbers. 
		• Perform the subtraction between 
		complex numbers by subtracting the 
		real part of one complex number from 
		other complex numbers and same for 
		the imaginary part too. 
	*/
	printf("\n\n-- Programming Task --\n\n");
	complex ca = { .real = 5, .imagine = 7 };
	complex cb = { .real = 3, .imagine = 3 };
	complex cc = { .real = 7, .imagine = 2 };
	complex csubtract = { .real = ca.real - cb.real - cc.real, .imagine = ca.imagine - cb.imagine - cc.imagine };
	printf("ca = %.2lf + %.2lfi\ncb = %.2lf + %.2lfi\ncb = %.2lf + %.2lfi\nResult is %.2lf + %.2lfi\n", ca.real, ca.imagine, cb.real, cb.imagine, cc.real, cc.imagine, csubtract.real, csubtract.imagine);
#pragma endregion

#pragma region quizAnswer
	
	//Answer is C

#pragma endregion

	bolumSonu();
	return 0;
}