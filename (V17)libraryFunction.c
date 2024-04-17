#include <stdio.h>
#include <math.h>
#include <ctype.h>
int libFunc(){ 
  bolumBasi();
  printf("-- Library Function (Video17) --\n\n");
  printf("S Y N T A X\n\tStandart library functions,standart functions printf(); , scanf(); , scanf_s();\n\tmath.h library\n\tsqrt(int a); , cbrt(int a); , pow(int a, int b)\n");
  printf("ctype.h library\n\ttoupper(char a); , ");
  int num = 25;
  printf("%d square root of %lf\n", num, sqrt(num));
  num = 125;
  printf("%d cube root of %lf\n", num, cbrt(num));

  char standartChar = 'a';
  printf("(%c)char result = toupper('%c'); --> %c\n", standartChar, standartChar, toupper(standartChar));
  standartChar = 'A';
  printf("(%c)char result = tolower('%c'); --> %c\n", standartChar, standartChar, tolower(standartChar));
 
#pragma region programmingTask
	//Create a program that computes the result of a
	// number raised to the power of the square root
	// of a number.
	// • Take input from user
	// • Compute the square root of a number using
	// sqrt()
	// • Compute the power of the number raised to
	// the power of its square root
	// • Print the result

  printf("Enter number: ");
  int number;
  scanf_s("%d", &number);
  double temp, result;
  temp = sqrt(number);
  result = pow(number, temp);
  printf("result is %lf", result);

#pragma endregion
#pragma region quizAnswer
  // Answer is B
#pragma endregion

  
  bolumSonu();
  return 0;
}