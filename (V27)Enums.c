#include <stdio.h>

enum Size
{
	Small = 27,
	Medium = 31,
	Large = 35,
	ExtraLarge = 40
} shoeSize;

#pragma region programmingTaskPart1
enum Days
{
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};
#pragma endregion


int enums() {
	bolumBasi();
	printf("-- Enumerations (Video27) --\n\n");
	printf("S Y N T A X\n\tfixed values also work outside the main\nenum Size{\n\tSmall,\n\tMedium,\n\tLarge,\n\tExtraLarge\n};\n\nenum shoeSize;\n\nshoeSize = Medium;\n");
	


	enum Size shoeSize1 = Small;
	enum Size shoeSize2 = Medium;
	enum Size shoeSize3 = Large;
	enum Size shoeSize4 = ExtraLarge;
	shoeSize = Medium;

	printf("Enum name is  \nshoeSize 1 Enum number is %d\nshoeSize2 Enum number is %d\nshoeSize3 Enum number is %d\nshoeSize4 Enum number is %d\nshoeSize number is %d\n",shoeSize1, shoeSize2, shoeSize3, shoeSize4, shoeSize);
#pragma region programmingTask
	/*
		Create an enum with enum constants Sunday, 
		Monday, Tuesday, Wednesday, Thursday, Friday, 
		and Saturday. 
		Inside the main function() 
		• Create two enum variables named 
		weekendl and weekend2. 
		• Assign values Sunday and Saturday to the 
		variables respectively. 
		• Print the values of weekendl and weekend2. 
	*/
	printf("\n\n-- Programming Task --\n\n");
	
	enum Days weekend1, weekend2;
	weekend1 = Sunday;
	weekend2 = Saturday;
	printf("weekend1 data is %d\nweekend2 data is %d\n", weekend1, weekend2);
#pragma endregion

#pragma region quizAnswer
	
	//Answer is C

#pragma endregion

	bolumSonu();
	return 0;
}