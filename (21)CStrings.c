#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int cStrings(){ 
	bolumBasi();
	printf("-- C Strings (Video21) --\n\n");
	printf("S Y N T A X\n\tevery string expression is array of char type and we can use this thing, for example\n\tchar str[]=\"some things\";\n\tif we print this array char like this\n\tprintf(\"%%s\",str); output is\n");
	char str[] = "some things\n";
	printf("%s",str);
	printf("\nMethod-1 (Only get first whitespace before expressions)\n\tprintf(\"Enter name : \");\n\tchar name[20];\n\tscanf(\"\%s\", name);\n\tprintf(name);\n");
	printf("\n\nMethod-2 (get the all chars)\n\tS Y N T A X\n\tproblem occrus after using this methods\n\tfgets(char array, sizeof(char array), stdin); [last parameter mean of standartinput]\n\tchar nameV2[20];\n\tprintf(\"\\tEnter Name : \");\n\tchar solution;\n\twhile((solution = getchar())!= NULL)\n\t\tsolution = getchar();\n\tfgets(nameV2, sizeof(nameV2), stdin);\n\tprintf(\" %% s\", nameV2);\n");
	
	int method = 0;
	switch (method)
	{
	case 0: printf("\n\nnot any method selected\n\n"); break;
	case 1:
		printf("\n\n-- METHOD 1 SELECTED --\n\n");
		printf("\tEnter name: ");
		char name[20];
		scanf("%s", name);
		printf("\t%s\n", name);
		break;
	case 2:
		printf("\n\n-- METHOD 2 SELECTED --\n\n");
		char nameV2[20];
		printf("\tEnter Name: ");
		fgets(nameV2, sizeof(nameV2), stdin);
		printf("%s\n", nameV2);
		break;
	default:printf("Wrong method number entered\n");
		break;
	}
	// Access chracters in string
	char str2[] = "C is low level launge";
	for(int i = 5; i < 8; i++)
	printf("%c\n", str2[i]);
	

	// Change the chracters in string
	str2[5] = 'L';
	str2[6] = 'O';
	str2[7] = 'W';
	for (int i = 5; i < 8; i++)
		printf("%c\n", str2[i]);

#pragma region programmingTask
	/*Create a program that takes your full name as
		input and prints your name.Then, change the
		first letter of your name to X.
		• If your name is John Williams, it will become
		Xohn Williams.
		• If your name is Julie Bing, it will become Xulie
		Bing.*/



	printf("-- Programming Task --\n");
	printf("Enter name: ");
	char taskName[20];
	fgets(taskName, sizeof(taskName), stdin);
	int timer = 0;
	taskName[0] = 'X';
	while (taskName[timer] != NULL)
	{
		if (taskName[timer] != ' ')
			printf("%c", taskName[timer]);
		else {
			printf("%c", taskName[timer]);
			taskName[timer + 1] = toupper(taskName[timer + 1]); 
		}
		timer++;
	}

#pragma endregion

#pragma region quizAnswer
	//char answer[20] = "Jack Sparrow";
	//printf("%s",&answer);

	// Answer is A
#pragma endregion

	bolumSonu();
	return 0;
}