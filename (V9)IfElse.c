#include <stdio.h>

int ifElse() {
	bolumBasi();
	printf("-- If Else Statements (Video9) --\n\n");
	printf("Syntax\nif(test_Condition){\n\n}\n");
	printf("Ayni zamanda tek satirlik kod if blogunun icine yazilacaksa suslu parantez konmasina gerek kalinmiyor\n");
	int yas = 0;
	printf("Yasinizi girin: ");
	scanf_s("%d", &yas);
	printf("if(yas >= 18){\nprintf(\"Oy kullanabilirsiniz\");\n}else{\nprintf(\"Oy kullanacak yasta degilsiniz\");\n}\n");
	printf("sonuc:\n\t");
	if (yas >= 18)
		printf("Oy kullanabilirisiniz");
	else
		printf("Oy kullanacak yasta degilsiniz");

	printf("else if seklinde sinirlanmis sekli\n\nif(yas < 0 || yas > 120)\n\tprintf(\"Gecersiz deger girdiniz\");\nelse if(yas >= 18)\n\tprintf(\"Oy kullanabilirsiniz\");\nelse\n\tprintf(\"Oy kullanacak yasta degilsiniz\");\n");
	printf("Yasinizi girin: ");
	scanf_s("%d",&yas);
	printf("sonuc:\n\t");
	if (yas < 0 || yas > 120)
		printf("Gecersiz deger girdiniz");
	else if(yas >= 18)
		printf("Oy kullanabilirsiniz");
	else
		printf("Oy kullanacak yasta degilsiniz\n\n");
	
#pragma region Programming Task

	double num;
	printf("enter number: ");
	scanf_s("%lf", &num);
	if (num < 0)
		printf("The number is Negative");
	else if (num > 0)
		printf("The number is Positive");
	else
		printf("The number is 0");

#pragma endregion
	printf("\n");
#pragma region Question
	int a = 5;
	if (!(a % 2 == 0))
		printf("inside if");
	else
		printf("Inside else");
	// Answer is 
	//		A) Insýde if
#pragma endregion

	printf("");
	bolumSonu();
	return 0;
}