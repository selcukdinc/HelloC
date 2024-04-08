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
        printf("seciminiz: ");
        scanf_s("%d", &videoSecim);
        switch (videoSecim)
        {
        case 3:
            dataTypesMain();
            break;
        case 4:
            Video3Main();
            break;
        case 6:
            Operators();
            break;
        case 7:
            typeConverter();
            break;

        }
         printf("Devam edilsin mi? (E/H)\nseciminiz: ");
        scanf_s("\n%c", &devam);
     } while (devam == 'e' || devam == 'E');
    
}

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
    printf("\n\nVideoda islenenlerin sonuna gelindi... \n\n\n");
    return 0;
}
