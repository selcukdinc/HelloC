#include <stdio.h>
 
int varScope(){ 
  bolumBasi();
  printf("-- Variable Scope (Video16) --\n\n");

  printf("S Y N T A X\n\tLocal Variable Scope\n\tGlobal Variable Scope\n");

  printf("-- Local Variables\n");
  printf("if declared inside function like\nvoid addNumbers(int number1, int number2){\n\tint result = number1 + number2;\n\treturn reslut;\n}\nWe cant use another function inside,\n\tfor example\n");
  printf("int main(){\n\tprintf(\"result = percend_d\", result);\n}\n\nif we can try this code, compailer doesnt compaile because main function inside doesnt declared result variable,\n\tresult is local variable");

  printf("-- Global Variables\n");
  printf("if variable declared outside the functions like\n\nint result;\n\nvoid addNumbers(int number1, int number2){\n\tresult = number1 + number2;\n\treturn reslut;\n}\n");
  printf("now we can use the other functions\n\bint main(){\n\tprintf(\"result = percend_d\", result);\n}\n\nif we can try this code, compailer does compaile because main function outside declared result variable,\n\tresult is global variable");
  bolumSonu();
  return 0;
}

#pragma region quizAnswer
	// Answer is B
#pragma endregion
