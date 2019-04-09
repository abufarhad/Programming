//Write a program to power distribution company charge its domistic consumer.

#include<stdio.h>
int main()
{
    int a,b,c,avg;
    printf("Enter the consumtion unit :");
    scanf("%d",&c);
    a=c/200;
    switch(a)
    {
    case 0:
        printf(" .5 per unite");break;
    case 1:
        printf(".65 per unite");break;
    case 2:
        printf(".8 per unite");break;
    case 3:
        printf("1 per unite");break;
    default:
        printf("1 per unite");break;
    }
    return 0;
}
