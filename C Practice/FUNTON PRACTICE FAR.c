#include<stdio.h>
double add(double a,double b)
{
    double sum;
    sum=a+b;
    return sum;
}
int main()
{
    double a,b,c,sum;
    printf("Enter two number for add ");
    scanf("%f %f",&a,&b);
    //a=b=5;
    c=add(a,b);
    printf(" sum is %.2f",add(a,b));
    return 0;
}

