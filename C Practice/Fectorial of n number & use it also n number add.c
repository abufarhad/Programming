#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("Enter the value of n : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
        sum=sum*i;}
    printf("SUM value is %d",sum);
    return 0;
}
