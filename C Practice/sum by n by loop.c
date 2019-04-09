#include<stdio.h>
int main()
{
    int n,a,i;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("sum=%d",sum);
    return 0;
}
