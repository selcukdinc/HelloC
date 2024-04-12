#include <stdio.h>
#include <stdbool.h>

int switchState() {
	bolumBasi();
	printf("-- Switch Statement (Video11) --\n\n");
	printf("S Y N T A X\n\tswitch(variable/expression){\n\t\tcase value1:\n\n\t\tbreak;\n\t\tcase value2:\n\n\t\tbreak;\n\t\tdefault:\n\t}\n");
	int sayi;
	printf("1 - 7 araliginda bir sayi girin: ");
	scanf_s("%d", &sayi);

	switch (sayi)
	{
	case 1:printf("Gunlerden Pazartesini sectiniz"); break;
		case 2:printf("Gunlerden Saliyi sectiniz"); break;
		case 3:printf("Gunlerden Carsambayi sectiniz"); break;
		case 4:printf("Gunlerden Persembeyi sectiniz"); break;
		case 5:printf("Gunlerden Cumayi sectiniz"); break;
		case 6:printf("Gunlerden Cumartesini sectiniz"); break;
		case 7:printf("Gunlerden Pazari sectiniz"); break;
		default: printf("gecersiz sayi girdiniz"); break;
	}

	switch (sayi)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf(" (Haftaici)\n"); break;
	case 6:
	case 7: printf(" (Haftasonu)\n"); break;
	default:
		break;
	}

	// Simple Calculator
	char operator;
	int say1, say2;
	double sonuc;
	bool islem = false;
	printf("\tBasit Hesap Makinesi --\n");
	do
	{
		printf("Operator secin: ['+', '-', '*', '/']: ");
		scanf_s("\n%c", &operator);
		printf("1. sayiyi girin: ");
		scanf_s("%d",&say1);
		printf("2. sayiyi girin: ");
		scanf_s("%d", &say2);
		switch (operator)
		{
			case '+': 
				sonuc = (double)say1 + say2;
				islem = true;
				break;
			case '-':
				sonuc = (double)say1 - say2;
				islem = true;
				break;
			case '*':
				sonuc = (double)say1 * say2;
				islem = true;
				break;
			case '/':
				sonuc = (double)say1 / say2;
				islem = true;
				break;
			default: printf("gecersiz operator sectiniz... Tekrar secim yapiniz\n"); break;
		}
	} while (!islem);
	printf("islemin sonucu: %.2lf\n", sonuc);

#pragma region programmingTask
	int ay;
	printf("ay numarasi girin (1-12): ");
	scanf_s("%d",&ay);
	printf("selected month is ");
	switch (ay)
	{
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
	}
#pragma endregion

#pragma region quizAnswer
	// Answer is D
	//	will be	default state execute
#pragma endregion

	bolumSonu();
	return 0;
}