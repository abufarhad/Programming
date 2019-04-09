#include<stdio.h>
int f=1,i,n;
int fac(int n)
{
    for(i=1;i<=n;i++)
    f*=i;
   return f;
}
int main()
{
    printf("Enter the value of n   :");
    scanf("%d",&n);
    printf("The value of %d factorial  is %d",n,fac(n));

}

