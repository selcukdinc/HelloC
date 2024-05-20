#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fileHandling() {
	bolumBasi();
	printf("-- File Handling (Video29) --\n\n");
	printf("S Y N T A X\n\t1) Open File\n\t\tFILE* fptr;\n\t\tfptr = fopen(\"test.txt\", \"r\"); ['r' = read]  ['w' = write]\n\t\tin write mode if file doesnt exist, program automaticliy create a file\n\t2) Perform File Operation 3) Close the File\n");
	
	FILE* fptr;

	// Open file - Read
	
	char content[1000];

	fptr = fopen("test.txt", "r");
	if (fptr != NULL) {
		while(fgets(content, 1000, fptr))
			printf("%s", content);
	}else
		printf("File Open Unsuccessful\n");

	// Close the file 

	fclose(fptr);
	

	// write content also create file
	
	fptr = fopen("newFile.txt", "w");
	fputs("New message 1\n", fptr);
	fputs("New message 2", fptr);

	fclose(fptr);


#pragma region programmingTask
	/*
		• Create a new file in write mode 
		Write Content 
		• C is a fun programming language. 
		And, I love using C language 
		Close the file 
		• Again open the file in read mode and read 
		the content of the file 
	*/

	printf("\n\n-- Programming Task --\n\n");

	FILE* programTask;
	programTask = fopen("taskText.txt", "w");
	fputs("C is a fun programming language\n", programTask);
	fputs("I love using C language", programTask);
	char contentV2[1000];
	fclose(programTask);
	programTask = fopen("taskText.txt", "r");
	while (fgets(contentV2, 1000, programTask))
		printf("%s", contentV2);
	fclose(programTask);
#pragma endregion

#pragma region quizAnswer
	
	//Answer is B

#pragma endregion

	bolumSonu();
	return 0;
}

