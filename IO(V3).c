#include <stdlib.h>
#include <stdio.h>

// Take Input and Print Output

int Video3Main(){
	printf("\nTake Input and Print Output (Video3)\n\n");
	int agev0;
	printf("int tipinde yasinizi girin: ");
	scanf_s("%d", &agev0);
	printf("yasiniz: %d (ciddiyim)", agev0);

	double dNumber;
	printf("\ndouble tipinde bir sayi girin: ");
	scanf_s("%lf", &dNumber);
	printf("girdiginiz double number = %lf", dNumber);

	char karakter;
	printf("\nkarakter girin: ");
	scanf_s("\n%c", &karakter);
	printf("girdiginiz karakter = %c", karakter);

	printf("\nAynı anda input alma double + karakter: "); 
	scanf_s("%lf %c",&dNumber, &karakter);
	printf("double number:\t%lf\nkarakter:\t\t%c",dNumber, karakter);

	float fNumber;
	int iNumber;

	printf("\n\n Aynı anda folat ve int tipinde degisken alma, degerleri girin (float int): ");
	scanf_s("%f %d", &fNumber, &iNumber);
	printf("girdiginiz float deger: %f\ngirdiginiz int deger: %d",fNumber, iNumber);
	bolumSonu();
	//return 0;
} 