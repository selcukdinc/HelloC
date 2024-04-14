#include <stdio.h>

int forLoop() {
    bolumBasi();
    printf("-- For Loop (Video13) --\n\n");

    printf("S Y N T A X\n\tfor(intializationExpression; testExpression; updateExpression){\n\t\t\\\\your code begins\n\n\t\t\\\\your code ends\n\t}");
    printf("\n\n\tfor(int i = 0; i < 5; i++){\n\t\t\\\\i = 0, 1, 2, 3, 4\n\t}\n");

    for (int i = 0; i < 10; i++)
        printf("%d ", i);
    printf("\n");
    for (int i = 0; i < 20; i++)
        printf("Emergency Condition\n");

    // sum numbers 1 to 100
    int total = 0;
    for (int i = 0; i <= 100; i++)total += i;
    printf("total = %d", total);

    printf("\n");
    // sum even numbers 2 to 100
    total = 0;
    for (int i = 0; i <= 100; i += 2)total += i;
    printf("total = %d", total);

    printf("\n");
#pragma region programmingTask
    // sum odd numbers 1 to 99
    printf("-- Programming Task --\n");
    total = 0;
    for (int i = 1; i <= 99; i += 2)total += i;
    printf("total = %d", total);
#pragma endregion

#pragma region quizAnswer
    // Aswer is C
#pragma endregion
    bolumSonu();
    return 0;
}