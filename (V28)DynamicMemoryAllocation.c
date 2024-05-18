#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dynamicMalloc() {
	bolumBasi();
	printf("-- Dynamic Memory Allocation (Video28) --\n\n");
	printf("S Y N T A X\n\tint n = 100;\n\tint* ptr;\n\tptr = (int*)malloc(n * sizeof(int));\n\tmalloc()\n\t\tallocate the memory\n\trealloc()\n\t\tresize memory allocation\n\t\tptr = realloc(ptr, 6 * sizeof(int));\n\tfree()\n\t\trelaese holding malloc information\n\t\tfree(ptr)\n");
	
	int n = 4;
	int * ptr = (int*)malloc(n * sizeof(int));;
	//ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory cannot be allocated");
		return 0;
	}

	printf("for while scanf function doesnt works fine VS22, debugger gives memory write violation and\nif you want compile this part of code use different compailer or online c compailers\n");
	/*
	
	printf("Enter input values:\n");
	for (int i = 0; i < n; i++) {
		scanf(" %d", (ptr + i));
	}

	printf("Input Values:\n");
	for (int i = 0; i < n; i++) {
		printf("%d\n", *(ptr + i));
	}

	free(ptr);

	*/

	printf("Also this part doesnt work in VS22 debugger, if you try online compailer, works very well\n");
	/*
	
	printf("Allocated Memory\n");
	for (int i = 0; i < n; ++i)
		printf("%p\n", ptr + i);
	n = 6;

	ptr = realloc(ptr, n * sizeof(int));
	
	printf("Newly Allocated Memory\n");
	for (int i = 0; i < n; ++i)
		printf("%p\n", ptr + i);
	
	*/
	

#pragma region programmingTask
	/*
		Create a program that dynamically changes the 
		size of an array. 
		o Create a pointer array like this 
		int* ages; 
		o Allocate 4 spaces for the array using the 
		malloc() function 
		Get 4 input values for the array. 
		o Print the array elements using the pointer. 
		Resize the array to store 6 elements using 
		realloc() 
		e Assign 32 and 59 as the 5th and 6th elements. 
		ages[4] = 32; 
		ages[5] = 59; 
		Then finally Print all 6 array elements. 
	*/
	printf("\n\n-- Programming Task --\n\n");
	printf("also this part crashed memory violation\n\tworks fine online c compailers");
	//int sizeArray = 4;
	////int* ptr = (int*)malloc(n * sizeof(int));
	//int* ages;
	//ages = (int*)malloc(sizeArray * sizeof(int));

	//printf("Enter ages\n");
	//for (int i = 0; i < sizeArray; ++i)
	//	scanf("\n%d", ptr + i);

	//printf("Thats the ages:\n");
	//for (int i = 0; i < sizeArray; ++i)
	//	printf("%d. age is %d\n", i, *(ptr + i));
	//// ptr = realloc(ptr, n * sizeof(int));
	//sizeArray = 6;
	//ages = realloc(ages, sizeArray * sizeof(int));

	//printf("Oh we forgot 5. and 6. ages, please enter 5th ages for 32 and 6th age for 59\n");
	//for (int i = 4; i < sizeArray; ++i)
	//	scanf("\n%d", ptr + i);

	//printf("Thats the final ages list below\n");
	//for (int i = 0; i < sizeArray; ++i)
	//	printf("%d. age is %d\n", i, *(ptr + i));

#pragma endregion

#pragma region quizAnswer
	
	//Answer is B

#pragma endregion

	bolumSonu();
	return 0;
}