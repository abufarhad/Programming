//Write a program to find  (a+b)^2 value.

#include<stdio.h>
int main()
{
    int a,b,c,V;
    printf("Enter the value of a & b :");
    scanf("%d%d%d",&a,&b,&c);
    V=((a*a)+(2*a*b)+(b*b));
    printf("The  valu of (a+b)^2 is =%d",V);
    return 0;

}
