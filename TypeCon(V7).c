#include <stdio.h>

int typeConverter() {
	bolumBasi();
	printf("-- Type Converter Methods (Video7) --\n\n");
	printf("degiskene casting s�lemi uygulanabilir, degiskenlerimiz\n\t'sonuc' double\t'a' ve 'b' int, olsun.");
	printf("\n\nilk islem\n'sonuc = a / b' olsun");
	double sonuc = 0;
	int a = 10, b = 4;
	sonuc = a / b;
	printf("\nsonuc = %lf",sonuc);
	printf("'\n\nikinci islem\n'sonuc = (double)a / b' olsun");
	sonuc = (double)a / b;
	printf("\nsonuc = %lf", sonuc);

	printf("eger iki degisken int ise i�lemin atanacagi degisken \n\tdouble bile olsa sonuc yuvarlan�r, fakat aralar�nda bir integer\n\tvar ise bu sefer islem double'a gore yap�l�r ve islem sonucu kusuratl� cikar");
		
	
	bolumSonu();
	return 0;
}