#include <stdio.h>

int operators() {
	/*
	* '+'	Topalam  operatörü	
	* '-'	Çýkarma  operatörü
	* '*'	Çarpma	 operatörü
	* '/'	Bölme	 operatörü
	* '%'	Kalan	 operatörü
	* '++'	Arttýrma operatörü
	* '--'	Eksiltme operatörü
	*/
	bolumBasi();
	printf("-- Operatorler (Video6) --\n\n");
	int a = 10, b = 20, c = 41, d = 2;
	printf("a = %d\tb = %d\n", a, b);
	printf("\na '+' b = %d", a + b);
	printf("\na '-' b = %d", a - b);
	printf("\na '*' b = %d", a * b);
	printf("\na '/' b = %.2lf", (double)a / b);
	
	printf("\n\nc = %d\td = %d",c,d);
	printf("\nc mod d = %d",c%d);
	
	printf("\n\na = %d\t", a);
	printf("\ta++ = %d", a++);
	printf("\ta = %d\t", a);
	printf("\t++a = %d",++a);
	printf("\ta = %d", a);

	printf("\n\nb = %d\t", b);
	printf("\tb-- = %d", b--);
	printf("\tb = %d\t", b);
	printf("\t--b = %d", --b);
	printf("\tb = %d", b);
	bolumSonu();
	return 0;
}