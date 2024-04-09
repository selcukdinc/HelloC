/*
 * Karþýlaþtýrma Operatörleri (Comparasion Operators)
 * 
 *		>		Daha büyük (Greater than) olmasý sorgulanýr
 *		<		Daha küçük (Less than) olmasý sorgulanýr
 *		==		Eþitlik (Equal to ) olmasý sorgulanýr
 *		>=		Daha büyük veya eþit (Greater than or equal) olmasý sorgulanýr
 *		<=		Daha küçük veya eþit (Less than or equal) olmasý sorgulanýr
 *		!=		Eþit deðil (Not equal) olmasý sorgulanýr
 * 
 * Lojik Operatörler 
 * 
 *		&&		Ve		- And
 *		||		Veya	- Or
 *		!		Deðil	- Not
 */

#include <stdio.h>
#include <stdbool.h>

int boolComp() {
	bolumBasi();
	printf("-- Bool Comparasion (Video8) --\n\n");
	printf("c dilinde bool tipinde degisken kullanmak icin\n\t\t<stdbool.h>\nisimli kutuphanenin eklenmis olmasi gerekir\n\n");

	bool deg1 = true;
	bool deg2 = false;

	printf("bool yazdirmak icin ozel bir ifade kullanmayiz\n");
	printf("iki adet degiskenimiz, \ndeg1 = true\tdeg2 = false\nseklinde olsun\n\n");
	printf("int gibi ifade edersek\n\tdeg1 = %d\tdeg2 = %d\n", deg1, deg2);
	printf("char gibi ifade edersek\n\tdeg1= %c\tdeg2= %c\n", deg1, deg2);
	printf("bool tipinde degiskenler char seklinde ifade edilemez\n\n");
	printf("bool tipinde degisken atarken\n\tbool deg = 12 < 7;\n seklinde atama yapilabilir\n\n");
	satir("<",">", 12, 5, 9);
	satir("!=","==", 12, 6, 6);
	satir("<=", ">=", 12, 5, 9);
	printf("bool tipinde degiskenlere lojik operatorleri kullanarak da deger atabiliriz\n\tbool deg = (12 > 2) && (5 != 4);\nAyrica sayilar yerine int tipinde degiskenler kullanabiliriz");
	
	// printf("\ncevap %c'dir",(char)98);
	
	bolumSonu();
	return 0;
}

#pragma region yazdirmaIslemi

	//printf("\n-- '<' Operatoru --\n\n");
	//deg3 = (12 < 9);
	//printf("deg3 = (12 < 9);\n\tdeg3 = %d\n", deg3);
	//deg3 = (5 < 9);
	//printf("\ndeg3 = (5 < 9);\n\tdeg3 = %d\n", deg3);
	

// Yazdýrma iþlemi bu metotta gerçekleþtirilir, her satýra o anki sütun deðeri ve ifadesi yazdýrýlýr 
int satir(char sutunAd1[], char sutunAd2[], int deg1, int deg2, int deg3) {
	for (size_t i = 0; i < 5; i++)
	{
		sutunYazdir(i, sutunAd1, deg1, deg2, deg3);
		printf("\t");
		sutunYazdir(i, sutunAd2, deg1, deg2, deg3);
		printf("\n");

		if (i % 2 == 0)
			printf("\n");
	}
	printf("\n");
}

int sutunYazdir(int satir, char op[], int deg1, int deg2, int deg3) {
	bool deg0;
	//op = "1";
	switch (satir)
	{
	case 0:
		printf("-- '");
		printf(op);
		printf("' Operatoru --");
		break;
	case 1:
		if (op[0] == '>' && op[1] == '=')
			op = "b";
		else if (op[0] == '<' && op[1] == '=') 
			op = "k";
		

		ustYazdir(deg1, deg2, op);
		break;
	case 2:
		karsilastir(deg1, deg2, op);
		break;
	case 3:
		if (op[0] == '>' && op[1] == '=')
			op = "b";
		else if (op[0] == '<' && op[1] == '=')
			op = "k";
		ustYazdir(deg2, deg3, op);
		break;
	case 4:
		karsilastir(deg2, deg3, op);
		break;
		break;
	}
}
int ustYazdir(int deg1, int deg2, char op[]) {

	switch (op[0])
	{
	case '!': printf("deg0 = (%d != %d);", deg1, deg2); break;

	case '=': printf("deg0 = (%d == %d);", deg1, deg2); break;

	case '<': printf("deg0 = (%d < %d); ", deg1, deg2); break;

	case '>': printf("deg0 = (%d > %d); ", deg1, deg2); break;

	case 'b': printf("deg0 = (%d >= %d);", deg1, deg2); break;

	case 'k': printf("deg0 = (%d <= %d);", deg1, deg2); break;
	}
}
int karsilastir(int deg1, int deg2, char op[]) {
	bool deg0;
	switch (op[0])
	{
	case '!':
		deg0 = (deg1 != deg2);
		printf("\tdeg0 = % d", deg0);
		break;
	case '=':
		deg0 = (deg1 == deg2);
		printf("\tdeg0 = %d", deg0);
		break;
	case '<':
		deg0 = (deg1 < deg2);
		printf("\tdeg0 = %d", deg0);
		break;

	case '>':
		deg0 = (deg1 > deg2);
		printf("\tdeg0 = %d", deg0);
		break;

	case 'b':
		deg0 = (deg1 >= deg2);
		printf("\tdeg0 = %d", deg0);
		break;

	case 'k':
		deg0 = (deg1 <= deg2);
		printf("\tdeg0 = %d", deg0);
		break;
	}
}
#pragma endregion