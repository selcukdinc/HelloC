#include <stdio.h>

int typeConverter() {
	
	bolumBasi();

	printf("-- Type Converter Methods (Video7) --\n\n");
	printf("degiskene casting islemi uygulanabilir,\n\tdegiskenlerimiz\n\t'sonuc' double\t'a' ve 'b' int, olsun.");
	printf("\n\nilk islem\n'sonuc = a / b' olsun");
	double sonuc = 0;
	int a = 10, b = 4;
	sonuc = a / b;
	printf("\nsonuc = %lf",sonuc);
	printf("'\n\nikinci islem\n'sonuc = (double)a / b' olsun");
	sonuc = (double)a / b;
	printf("\nsonuc = %lf", sonuc);

	printf("\n\neger iki degisken int ise islemin atanacagi degisken \n\tdouble bile olsa sonuc yuvarlanýr, fakat aralarýnda bir integer\n\tvar ise bu sefer islem double'a gore yapýlýr ve islem sonucu kusuratlý cikar");
	
	/*
		Video sonunda sorulan soru

		int result = '8' + 12;		result ne olur?
		
		Videonun sonunda sorulan sorunun cevabý
	*/
	
	/*
	char x = '8';
	printf("\n\nint result = '8' + 12;");
	printf("\n'8'in sahip oldugu int deger = %d", x);
	int result = '8' + 12;
	printf("\nsonuc = %d + 12 = %d", x, result);
	*/

	bolumSonu();
	return 0;
}