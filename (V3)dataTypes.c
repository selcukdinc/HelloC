/*
* int		(4 bytes) | %d for printing	
* double	(8 bytes) |	%lf for printing
* float		(4 bytes) | %f for printing
* char		(1 bytes) | %c for printing
*/

#include <stdio.h>

int dataTypesMain() {
	bolumBasi();
	printf("-- Data Types (Video3) --\n\n");
	printf("int\t-\t'd'\n");
	printf("double\t-\t'lf'\n");
	printf("float\t-\t'f'\n");
	printf("char\t-\t'c'\n");
	printf("float ve double ifadelerde '.2f' veya '2.lf'\n\tifadeleri ile virgulden sonra kac rakam\n\tgelecegi belirlenebilir\n\n");
	int age = 10;
	printf("age = %d", age);

	double doubleNumber = 12.45;
	float floatNumber = 12.4f;
	double exponationalNumber = 12.5e6;
	char karakter = 'A';
	printf("\ndoubleNumber = %lf\tfloatNumber = %.2f\texponationalNumber = %lf",doubleNumber, floatNumber, exponationalNumber);
	printf("\ndoubleNumber'.2lf' = %.2lf", doubleNumber);
	printf("\nkarakterin kendisi = %c\tkarakterin int deðeri = %d", karakter, karakter);
	printf("\ndoubleNumber'in size'ý = %zu", sizeof(doubleNumber));
	printf("\nfloatNumber'ýn size'ý = %zu", sizeof(floatNumber));
	printf("\nkarakter'in size'ý = %zu", sizeof(karakter));
	bolumSonu();
	return 0;
}