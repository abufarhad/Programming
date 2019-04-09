#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter 3 number :");
    scanf("%d %d %d",&a,&b,&c);
    i=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Leargest number is %d",i);
    return 0;
}
