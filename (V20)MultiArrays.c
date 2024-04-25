#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int multiArrays(){ 
	bolumBasi();
	printf("-- Multidimensional Arrays (Video20) --\n\n");
	printf("S Y N T A X\n\tdataType dataName[rows][columns];\n\tint arr [2][3] = { {1, 3, 5} ,\n\t\t\t   {2, 4, 6} };\n");
	
	int arr[2][3] = {	{1, 3, 5} , 
						{2, 4, 6} };

	// Access multidimensional arrays
	printf("\n-- Access the arr\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
		
	// Change specified element of array
	arr[0][2] = 7;
	arr[1][1] = 8;
	printf("\n-- Change specified element of array\narr[0][2] = 7;\narr[1][1] = 8;\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
#pragma region quizAnswer
	// Answer is D
	// int arrv2[2][4] = { {3, 6, 9, 12} , {2, 4, 6, 8} };
	// printf("\nAnswer is %d", arrv2[1][4]);
#pragma endregion

	bolumSonu();
	return 0;
}