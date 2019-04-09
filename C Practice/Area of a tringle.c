//Write a program to find Area of  a circle.
#include<stdio.h>
int main()
{
    float a,b,c,Area,temp,s;
    printf("Enter 3 number :");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    temp=(s*(s-a)*(s-b)*(s-c));
    Area=sqrt(temp);
    printf("The  valu of AREA is %f",Area);
    return 0;

}
