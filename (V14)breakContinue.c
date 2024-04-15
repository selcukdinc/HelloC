#include <stdio.h>

int breakContinue() {
	bolumBasi();
	printf("-- Break and Continue (Video14) --\n\n");

	printf("S Y N T A X\n\t'inside the loop'\n\t\tbreak;\n\t");

	for (int i = 1; i <= 5; i++) {
		if (i == 3) break;
		printf("%d\n", i);
	}

	while (1)
	{
		int age;
		printf("enter age: ");
		scanf_s("%d", &age);
		if (age < 0)
			break;
		printf("age: %d\n", age);
		
	}

	for (int i = 1; i <= 5; i++) {
		if (i == 3) continue;
		printf("%d\n", i);
	}

		   /*	
			*	if negative number enter, loop will be break.
			*	if 0 number enter then loop will be continue.
			*	if even number enter, loop print these
			*	if odd number enter, loop doesnt print these
			*/

	while (1)
	{
		int number;
		printf("enter number: ");
		scanf_s("%d", &number);
		if (number < 0) 
			break;
		else if (number == 0 || number % 2 != 0) 
			continue;
		else 
			printf("\t\teven number is %d\n", number);
	}

#pragma region programmingTask

		/*Can you write a program that takes an input
		from the user and prints it if the value is a
		negative odd number ?
		• If the input value is positive, end the loop with
		message, Positive Value.
		• If the input value is negative even, skip the
		value with message Negative Even.*/
	printf("-- Programming Task --\n");
	while (1) {
		int num;
		printf("enter number: ");
		scanf_s("%d", &num);
		if (num > 0) {
			printf("Positive Value\n");
			break;
		} else if (num == 0) {
			printf("Zero is not even or odd, loop continue\n");
			continue;
		} else if (num % 2 == 0) {
			printf("Negative Even\n");
			continue;
		}else
			printf("\t\t\t%d\n",num);
	}
		
#pragma endregion

#pragma region quizAnswer
	// Aswer is B
#pragma endregion

	
	bolumSonu();
}