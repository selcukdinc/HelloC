#include <stdio.h>

int ternaryOperators() {
	bolumBasi();
	printf("-- Ternary Operators (Video10) --\n\n");
	printf("if-else yerine kullanabilir, kodun okunabilirligi artar\n");
	printf("S Y N T A X\n\tkontrolEdilenKondusyon ? true olma durumunda calisakacak bolum : false olma durumunda calisacak bolum;\n");
	printf("Ornek\n\tint age = 15\n\t(age >= 18) ? printf(oy kullanabilisin) : printf(oy kullanacak yasta degisin);\n");
	printf("sonuc\n\t");
	int age = 15;
	(age >= 18) ? printf("oy kullanabilirsin") : printf("oy kullanacak yasta degilsin");
	printf("\n");
	
	char operator = '+';
	int num1 = 8, num2 = 7;
	int result = (operator == '+') ? num1 + num2 : num1 - num2;
	printf("%d\n",result);
	
	#pragma region programmingTask
	int sayi;
	printf("Tek-Cift Kontrol, sayi: ");
	scanf_s("%d", &sayi);
	(sayi % 2 == 0) ? printf("this number is Even") : printf("this number is Odd");
	#pragma endregion

	#pragma region quizAnswer
	//answer is C 
	//		int result = (5 > 3) 5 : 3;
#pragma endregion

	bolumSonu();
	return 0;
}