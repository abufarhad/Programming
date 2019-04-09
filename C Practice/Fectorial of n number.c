#include<stdio.h>
int main()
{
    int i,n;
    long long sum=1;
    printf("Enter the value of n : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
        sum=sum*i;}
    printf("SUM value is %d\n",sum);
//    if(sum>6227020800){ printf("Overflow");}
//    else if(sum<10000){printf("Underflow");}
//    else printf("The value of %d factorial  is %d",n,sum);

    return 0;
}
