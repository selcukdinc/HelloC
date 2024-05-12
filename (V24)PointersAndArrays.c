#include <stdio.h>

int pointerAndArr() {
	bolumBasi();
	printf("-- Pointers and Arrays (Video24) --\n\n");
	printf("S Y N T A X\n\tfirst of all declare the array\n\tint numbers[5] = { 1, 3, 5, 7, 9 };\n\tarray name is pointer converteed and used, if we want to use it, bypass '&' sign\n\tarray address always point the first element of array\n\tArrays also pointer name can be used, for example, if we want to print array address\n\tprintf(\"Array address: %%p\", numbers);\n\tif we want to third elemnet address we can use like that\n\tprintf(\"Array address: %%p\", numbers + 2);\n");
	int numbers[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++){
		printf("%d = %p\n", numbers[i], &numbers[i]);
	}
	printf("Array address: %p\n", numbers);

	// print array adresses with using pointer knowledge
	for (int i = 0; i < 5; i++)
		printf("Array [element is %d] address of %d: %p\n",numbers[i], i, numbers + i);

	// Access array elements using pointer
	for (int i = 0; i < 5; i++)
		printf("%d = %p\n", *(numbers + i), numbers + i);

	// Change array elements using pointers
		// print array
	for (int i = 0; i < 5; i++)
		printf("Array %d. elemnet is: %d\n", i, numbers[i]);
	printf("\nArray element replacment with loop var * 2\n\n");
		//Change the values of array elements with for loop
	for (int i = 0; i < 5; i++) {
		*(numbers + i) = i * 2;
		printf("Array %d. element is:%d\n", i, *(numbers + i));
	}
		

#pragma region programmingTask
	/*
	Create a program to find the largest element of an array using pointers. 
	int arr[] = {34, 12, 21, 54, 48); 
	• Assign the first element of the array to a largest variable using pointer 
	int largest = *arr 
	• Run a for loop to access each element of the array. 
	• Compare largest with each array element using pointer 
	largest < *(arr + i) 
	• If the largest variable is smaller than a element, assign the array value to largest 
	largest = *(arr + i) 
	*/
	
	printf("\n\n-- Programming Task --\n\n");
	
	int arr[] = { 34, 12, 21, 54, 48 };
	int largest = *arr;
	for (int i = 0; i < 5; i++) {
		if (largest < *(arr + i))
			largest = *(arr + i);
	}
	printf("Largest element is %d", largest);

#pragma endregion

#pragma region quizAnswer
	
	//Answer is D

#pragma endregion

	bolumSonu();
	return 0;
}