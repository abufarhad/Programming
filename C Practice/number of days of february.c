#include<stdio.h>
int main()
{
    char feb;
    int days;
    printf("Enter 1 if the yerar is lep year otherwise enter 0");
    scanf("%c",&feb);
    days=(feb=='1')?29:28;
    printf("Number of days in february is %d",days);
    return 0;
}

