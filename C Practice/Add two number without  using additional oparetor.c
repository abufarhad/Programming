#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    sub=a+~b+1;//for subtract//;
    sum=a-~b-1;//for add //;
    printf(" Sum of this two number is  %d\n",sum);
    printf(" Subtraction of this two number  is %d",sub);
    return 0;
}
