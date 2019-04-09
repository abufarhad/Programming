#include<stdio.h>
int main()
{
    int a,i,j,n,k,rev=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The number is %d",rev);
    return 0;
}


