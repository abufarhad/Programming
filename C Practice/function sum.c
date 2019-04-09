#include<stdio.h>
int sum(int n,int j)
{
    int i;
    int sum=0;
    for(i=0;i<=n;i++)
        sum+=i;
    return (sum);
}
int main()
{
    int n,j;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("\n\n The value of sum is %d",sum(n,j));
}
