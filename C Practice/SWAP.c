#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    c=a;a=b;b=c;
    printf(" After swapping The value of a is %d\n",a);
    printf(" After swapping The value of b is %d",b);
    return 0;
}
