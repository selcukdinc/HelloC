#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 20
int cStringFunc(){ 
	bolumBasi();
	printf("-- C String Functions (Video22) --\n\n");
	printf("S Y N T A X\n\tfirt of all #include <string.h>\n\tstrlen(char variable[])     [%%zu] >> return lenght of string\n\tstrcpy(char target[], char source[])     [] >> copy string to another\n\tstrcat(char main[], char plusString[])     [] >> 2 string together\n\tstrcmp(char str1[], char str2[])     [if 2 string are equals return 0 else return random value] >> compare 2 string(case sensitive)");
	
	// get the length of string
	char str[] = "Hey World!";
	printf("%s, %zu", str, strlen(str));

	// copy string
	char car[] = "Supra mark IV";
	char bestCar[MAX_LENGTH];
	strcpy(bestCar, car);
	printf("\nB E S T   C A R : %s\n", bestCar);
	

	// together 2 string
	char text1[20] = "Hello ";
	char text2[] = "World!";
	strcat(text1, text2);
	printf("%s\n\n", text1);

	// compare 2 string
	char text3[] = "Undertale";
	char text4[] = "uNDERTALE";
	
	if (strcmp(text3, text4) == 0)
		printf("%s   and   %s   are are equal   (strcmp value = %d)\n", text3, text4, strcmp(text3, text4));
	else
		printf("%s   and   %s   arent equal eachother   (strcmp value = %d)\n", text3, text4, strcmp(text3, text4));

#pragma region programmingTask
	/*Create a program to compare two strings and
		print the larger strings.
		• Get two string input from the user using
		fgets()
		• Compare the length of both the strings using
		strlen()
		• Print the larger string*/
	printf("\n\n-- Programming Task --\n\tif Enter input1 stuck and program skip the input2 please dont use main.c inside scanf function,\n\tfgets and scanf functions are problem when used together\n\n");
	// if Enter input1 stuck and program skip the input2 please dont use main.c inside scanf function, fgets and scanf functions are problem when used together
	char input1[50], input2[50];
	printf("Enter input1: ");
	fgets(input1, sizeof(input1), stdin);
	printf("Enter input2: ");
	fgets(input2, sizeof(input2), stdin);
	if (strlen(input1) > strlen(input2))
		printf("longest string is input1 is %s", input1);
	else
		printf("longest string is input2 is %s", input2);
#pragma endregion
#pragma region quizAnswer
	// Answer is B
#pragma endregion



	bolumSonu();
	return 0;
}