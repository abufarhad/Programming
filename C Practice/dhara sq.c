//1^2+2+3^2+4+5^2+........+n\\;
#include<stdio.h>
int main()
{
    int i,sum=0,n,a;
    printf("Enter the value  of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1){
        //a=pow(i,2);
            sum=sum+i*i;}
            else
                sum=sum;

    }
    printf("The value is %d",sum);
    return 0;
}
