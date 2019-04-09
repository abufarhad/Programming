#include<stdio.h>
int main()
{
    int n;float sum=0,i;
    printf("Enter a positive number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;}
    printf("The value is %f",sum);

    return 0;
}

