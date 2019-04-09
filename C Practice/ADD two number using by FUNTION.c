#include<stdio.h>
int add(int a,int b)
{
   int sum=a+b;
   return sum;
}
int main()
{
    int a,b;
    printf("Enter the value of a &b  :");
    scanf("%d %d",&a,&b);
    printf("The value of this sum is %d",add(a,b));
}
