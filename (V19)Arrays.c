#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int arrays(){ 
	bolumBasi();
	printf("-- C Arrays (Video19) --\n\n");

	printf("S Y N T A X\n\tdataType arrayName[arraySize];\n");
	int age[] = {21, 29, 32, 25, 17};
	// Access array data
	for (int i = 0; i < 5; i++)
		printf("%d\n", age[i]);
	// Asign array data
	for (int i = 0; i < 5; i++) {
		printf("index: %d\n\t%d assign the new value : ",i , age[i]);
		scanf("%d", &age[i]);
	}
	// Print new values
	printf("\n-- New Values --\n");
	for (int i = 0; i < 5; i++)
		printf("index %d: %d\n",i , age[i]);

#pragma region programmingTask
		/*
		Create a program that computes the average
		marks of a student.
		• Create an array that stores the marks of 5
		subjects
		• Compute the total marks by adding all the
		marks
		• Divide the total marks by total number of
		subjects
		• Print the average marks
		*/
	printf("\n-- Programming Task --\n");
	int marks[5];
	double resultv3 = 0;
	for (int i = 0; i < 5; i++) {
		printf("mark : %d\n\tenter the mark: ",i);
		scanf("%d", &marks[i]);
	}
	for (int i = 0; i < 5; i++) 
		resultv3 += marks[i];
	resultv3 /= 5;
	printf("result is %.2lf", resultv3);
#pragma endregion

#pragma region quizAnswer
	// Answer is C
#pragma endregion

	bolumSonu();
	return 0;
}