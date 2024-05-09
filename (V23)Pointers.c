#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int cPointers(){ 
    bolumBasi();
    printf("-- Pointers (Video23) --\n\n");
    
    printf("S Y N T A X\n\t pointers are linked eacother with Adresses, first of all, print the variable adress\n\tint age = 25;\n\tprintf(\"age adress is\\n\\t%%p\\n\", &age);\n\nP O I N T E R S\n\tint* ptr = &age;\n\tprintf(\"pointer adress is\\n\\t%%p\\n\",ptr);\n-- Access pointer value --\n\tprintf(\"Value: %%d\", *ptr);\n-- Change Value using pointer --\n\t*ptr = 33;\n\tprintf(\"New Value : %%d\", *ptr);\n");
    int age = 25;
    printf("age adress is\n\t%p\n", &age);
    int* ptr = &age;
    printf("pointer adress is\n\t%p\n", ptr);
    // Access pointer variable
    printf("Value: %d\n", *ptr);
    // Change Value using pointer
    *ptr = 33;
    printf("New Value: %d\n", *ptr);

#pragma region programmingTask
    /*Create a program to change the value of a 
    variable using a pointer. 
    • Get input value for a double variable salary. 
    • Assign the address of salary to a double 
    pointer. 
    Now use the pointer to 
    print the value of salary, 
    increase the salary by 2 times, 
    print the new salary. */

    double salary = 0;
    printf("Enter Salary: ");
    scanf("%lf", &salary);
    double* ptrSalary = &salary;
    printf("salary is %.2lf\n", *ptrSalary);
    *ptrSalary *= 2;
    printf("New salary is %.2lf", *ptrSalary);
#pragma endregion
#pragma region quizAnswer
    //Answer is C
#pragma endregion


    bolumSonu();
    return 0;
}