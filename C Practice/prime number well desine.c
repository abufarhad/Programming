#include<stdio.h>
int main()
{
    int   n,i,j,k=0,m,t,c;
    printf("Enter number from  what range you want to print prime number :  ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0) break;
        }
        if(j==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
