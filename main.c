#include <stdio.h>

int main()
{
    int videoSecim;
    char devam;
    int secim = 1;
    
    if (secim == 1)
     do
     {
        clrsrc();
        printf("dataTypes(video3)\t\t(3)\n");
        printf("InputOutput(video4)\t\t(4)\n");
        printf("Operators(video6)\t\t(6)\n");
        printf("TypeConverter(video7)\t\t(7)\n");
        printf("BoolComparasion(video8)\t\t(8)\n");
        printf("If-ElseStates(Video9)\t\t(9)\n");
        printf("TernaryOp(Video10)\t\t(10)\n");
        printf("SwitchState(Video11)\t\t(11)\n");
        printf("WhileLoop(Video12)\t\t(12)\n");
        printf("ForLoop(Video13)\t\t(13)\n");
        //printf("BreakCon(Video14)\t\t(14)\n");
        //printf("CFunction(Video15)\t\t(15)\n");
        printf("seciminiz: ");
        scanf_s("%d", &videoSecim);
        switch (videoSecim){
        case 3: dataTypesMain(); break;
        case 4: video4Main(); break;
        case 6: operators(); break;
        case 7: typeConverter(); break;
        case 8: boolComp(); break;
        case 9: ifElse(); break;
        case 10: ternaryOperators(); break;
        case 11: switchState(); break;
        case 12: whileLoop(); break;
        case 13: forLoop(); break;
        //case 14: ifElse(); break;
        //case 15: ifElse(); break;
        }
         printf("Devam edilsin mi? (E/H)\nseciminiz: ");
        scanf_s("\n%c", &devam);
     } while (devam == 'e' || devam == 'E');
}

// her yeni sayfada 
// 
//bolumBasi();
//printf("-- Konu Ýsmi (Video?) --\n\n");
//
//bolumSonu();
// 
// þeklinde bir yol izlenmelidir, 
//      bu sayede sayfalarýn benzerliði devamlý olacaktýr
// 

int clrsrc()
{
    system("@cls||clear");
    return 0;
}
int bolumBasi() {
    clrsrc();
    return 0;
}
int bolumSonu() {
    printf("\n\nVideoda islenenlerin sonuna gelindi... \n\n");
    return 0;
}