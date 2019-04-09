#include<stdio.h>
int fac(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f*=i;
   return f;
}
int main()
{
    int n,c;
    printf("Enter the value of n   :");
    scanf("%d",&n);
    c=fac(n);
    //printf("The value of %d factorial  is %d",n,c);
    if(c>6227020800){ printf("Overflow");}
    else if(c<10000){printf("Underflow");}
    else printf("The value of %d factorial  is %d",n,c);

}

