#include <stdio.h>

int whileLoop() {
	bolumBasi();
	printf("-- While Loop (Video12) --\n\n");
	
	printf("S Y N T A X\n\twhile(condution){\n\t\t'code will be right there'\n\t}\n");
	printf("int count = 0;\nwhile(count < 5)printf(\"While Loop in C (loop count: [yuzde]d)\\n\",count++);\n\tsonuc:\n");
	
	int count = 0;
	while (count < 5) printf("While Loop in C (loop count: %d)\n", count++);

#pragma region CarpimTablosu
//	//Multiplication Table
//	int satir = 1, sutun = 1;
//	while (sutun <= 10 && satir <= 10)
//	{
//		while (satir <= 10)
//		{
//			printf("%d x %d = %d\n", sutun, satir, satir * sutun);
//			satir++;
//		}
//		sutun++;
//		satir = 1;
//	}
#pragma endregion
	
	int num, countv2 = 0;
	printf("carpilmasini istediginiz sayiyi girin: ");
	scanf_s("%d", &num);
	while (countv2++ < 10) printf("%d x %d = %d\n", num, countv2, countv2 * num);

	int whlSayac = 1, doSayac = 1;
	while (whlSayac < 5)
		printf("while sayac: %d\n", whlSayac++);
	
	do
		printf("do sayac: %d\n", doSayac++);
	while (doSayac < 5);

#pragma region programmingTask
	printf("-- Programming Task --\n");
	int sayi, sayac = 11;
	printf("sayi girin: ");
	scanf_s("%d",&sayi);
	while (sayac-- > 1) printf("%d x %d = %d\n", sayi, sayac, sayi * sayac);
	
#pragma endregion

#pragma region quizAnswer
	// Aswer is A
	// Because other option possible increase the variables but option a is always true...
#pragma endregion

	bolumSonu();
	return 0;
}