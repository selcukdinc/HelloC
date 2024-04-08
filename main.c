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
        printf("dataTypes(video2)\t\t(2)\n");
        printf("InputOutput(video3)\t\t(3)\n");
        printf("Operators(video4)\t\t(4)\n");
        printf("TypeConverter(video5)\t\t(5)\n");
        printf("seciminiz: ");
        scanf_s("%d", &videoSecim);
        switch (videoSecim)
        {
        case 2:
            dataTypesMain();
            break;
        case 3:
            Video3Main();
            break;
        case 4:
            Operators();
            break;
        case 5:
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
}

int bolumSonu() {
    printf("\n\nVideoda islenenlerin sonuna gelindi... \n\n\n");
}
